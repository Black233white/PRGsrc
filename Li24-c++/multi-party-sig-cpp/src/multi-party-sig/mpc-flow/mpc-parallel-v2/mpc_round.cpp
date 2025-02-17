//
// Created by 何剑虹 on 2021/6/6.
//

#include "multi-party-sig/mpc-flow/mpc-parallel-v2/mpc_round.h"
#include <string>
#include <vector>
#include <cassert>
#include <iostream>
#include <chrono>
#include "mutex"
std::mutex mtx;

namespace safeheron{
namespace mpc_flow{
namespace mpc_parallel_v2{

class MPCContext;

std::string MPCRound::make_error_msg(int error_code_, const std::string &file_name, int line_num, const std::string &func_name,
                           const std::string &error_description){
    std::string str;
    str.reserve(100);
    str.append(file_name);
    str.append(":");
    str.append(std::to_string(line_num));
    str.append(":");
    str.append(error_description);
    return str;
}

bool MPCRound::InternalPushMessage(int &error_code, std::string &error_msg) {
    assert(round_index_ == 0);
    bool ok = true;
    ok = ComputeVerify();
    if (!ok) {
        error_code = 1;
        error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, "ComputeVerify failed!");
        return false;
    }
    ok = MakeMessage(out_p2p_message_arr_, out_broadcast_message_, out_des_arr_);
    if (!ok) {
        error_code = 1;
        error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, "MakeMessage failed!");
        return false;
    }
    is_finished_ = true;
    return true;
}

bool MPCRound::InternalPushMessage(const std::string &p2p_msg, const std::string &bc_msg, int round_index, const std::string &party_id, int &error_code, std::string &error_msg) {
    assert(round_index_ != 0);
    bool ok = true;
    if (round_index_ != (round_index + 1)) {
        char ch[100];
        snprintf(ch, 100, "Need message from round %d, but not round %d !", round_index_ - 1, round_index);
        error_code = 1;
        error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, ch);
        return false;
    }

    // Receive message
    ok = !( (in_message_type_ & MessageType::P2P) &&  p2p_msg.empty() );
    if (!ok) {
        error_code = 1;
        error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, "Failed to check in_message_type_!: ok = (in_message_type_ & MessageType::P2P) && ( p2p_msg.size() != (size_t)(total_parties_ - 1) )");
        return false;
    }
    ok = !((in_message_type_ & MessageType::BROADCAST) &&  bc_msg.empty());
    if (!ok) {
        error_code = 1;
        error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, "Failed to check in_message_type_!: ok = (in_message_type_ & MessageType::BROADCAST) &&  bc_msg.empty()");
        return false;
    }
    ok = ParseMsg(p2p_msg, bc_msg, party_id);
    if (!ok) {
        error_code = 1;
        error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, "ParseMsg failed!");
        return false;
    }
    ok = ReceiveVerify(party_id);
    if (!ok) {
        error_code = 1;
        error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, "ReceiveVerify failed!");
        return false;
    }
    msg_count_++;

    // If all messages were received.
    if (msg_count_ == total_parties_ - 1) {
        ok = ComputeVerify();
        if (!ok) {
            error_code = 1;
            error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, "ComputeVerify failed!");
            return false;
        }
        ok = MakeMessage(out_p2p_message_arr_, out_broadcast_message_, out_des_arr_);
        if (!ok) {
            error_code = 1;
            error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, "MakeMessage failed!");
            return false;
        }
        is_finished_ = true;
    }
    return true;
}

bool MPCRound::InternalPopMessages(std::vector<std::string> &out_p2p_msg_arr, std::string &out_broadcast_msg, std::vector<std::string> &out_des_arr, int &error_code, std::string &error_msg) {
    bool ok = true;
    ok = !( (out_message_type_ & MessageType::P2P) && out_p2p_message_arr_.size() != (size_t)(total_parties_ - 1) );
    if (!ok) {
        error_code = 1;
        error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, "Failed to check out_message_type_!: ok = (out_message_type_ & MessageType::P2P) && ( out_p2p_msg_arr.size() != (size_t)(total_parties_ - 1) )");
        return false;
    }
    ok = !( (out_message_type_ & MessageType::BROADCAST) && out_broadcast_message_.empty() );
    if (!ok) {
        error_code = 1;
        error_msg = make_error_msg(1, __FILE__, __LINE__, __FUNCTION__, "Failed to check out_message_type_!: ok = (out_message_type_ & MessageType::BROADCAST) && out_broadcast_msg.empty()");
        return false;
    }
    out_p2p_msg_arr.insert(out_p2p_msg_arr.begin(), out_p2p_message_arr_.begin(), out_p2p_message_arr_.end());
    out_broadcast_msg = out_broadcast_message_;
    out_des_arr.insert(out_des_arr.begin(), out_des_arr_.begin(), out_des_arr_.end());
    return true;
}

}
}
}
