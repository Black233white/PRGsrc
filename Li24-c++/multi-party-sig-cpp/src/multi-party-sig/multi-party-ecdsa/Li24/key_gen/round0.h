
#ifndef SAFEHERON_MULTI_PARTY_ECDSA_Li24_KEY_GEN_ROUND0_H
#define SAFEHERON_MULTI_PARTY_ECDSA_Li24_KEY_GEN_ROUND0_H

#include <string>
#include <vector>
#include "multi-party-sig/mpc-flow/mpc-parallel-v2/mpc_context.h"
#include "multi-party-sig/mpc-flow/mpc-parallel-v2/message_type.h"

namespace safeheron {
namespace multi_party_ecdsa{
namespace Li24{
namespace key_gen {


class Round0 : public safeheron::mpc_flow::mpc_parallel_v2::MPCRound {
public:
    Round0(): MPCRound(safeheron::mpc_flow::mpc_parallel_v2::MessageType::None, safeheron::mpc_flow::mpc_parallel_v2::MessageType::P2P_BROADCAST){}

    bool ParseMsg(const std::string &p2p_msg, const std::string &bc_msg, const std::string &party_id) override { return true; }

    bool ReceiveVerify(const std::string &party_id) override { return true; }

    bool ComputeVerify() override;

    bool MakeMessage(std::vector<std::string> &out_p2p_msg_arr, std::string &out_bc_msg,
                     std::vector<std::string> &out_des_arr) const override;
};

}
}
}
}


#endif //SAFEHERON_MULTI_PARTY_ECDSA_Li24_KEY_GEN_ROUND0_H
