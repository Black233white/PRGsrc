#include <google/protobuf/util/json_util.h>
#include "crypto-suites/crypto-bn/rand.h"
#include "crypto-suites/crypto-encode/base64.h"
#include "multi-party-sig/multi-party-ecdsa/Li24/party.h"

using std::string;
using safeheron::bignum::BN;
using google::protobuf::util::Status;
using google::protobuf::util::MessageToJsonString;
using google::protobuf::util::JsonStringToMessage;
using google::protobuf::util::JsonPrintOptions;
using google::protobuf::util::JsonParseOptions;

namespace safeheron {
namespace multi_party_ecdsa{
namespace Li24{



bool RemoteParty::ToProtoObject(safeheron::proto::multi_party_ecdsa::Li24::Party &party) const {
    bool ok = true;
    string str;
    party.set_party_id(party_id_);

    index_.ToHexStr(str);
    party.set_index(str);


/*    safeheron::proto::CurvePoint point;
    ok = g_x_.ToProtoObject(point);
    if (!ok) return false;
    party.mutable_g_x()->CopyFrom(point);*/

    seed_.ToHexStr(str);
    party.add_seed(str);

    return true;
}

bool RemoteParty::FromProtoObject(const safeheron::proto::multi_party_ecdsa::Li24::Party &party) {
    bool ok = true;

    party_id_ = party.party_id();
    ok = !party_id_.empty();
    if (!ok) return false;

    index_ = BN::FromHexStr(party.index());
    ok = (index_ != 0);
    if (!ok) return false;


/*    ok = g_x_.FromProtoObject(party.g_x());
    ok = ok && !g_x_.IsInfinity();
    if (!ok) return false;*/

    seed_ = BN::FromHexStr(party.seed(0));

    return true;
}


typedef RemoteParty TheClass;
typedef safeheron::proto::multi_party_ecdsa::Li24::Party ProtoObject;

bool TheClass::ToBase64(string &b64) const {
    bool ok = true;
    b64.clear();
    ProtoObject proto_object;
    ok = ToProtoObject(proto_object);
    if (!ok) return false;

    string proto_bin = proto_object.SerializeAsString();
    b64 = safeheron::encode::base64::EncodeToBase64(proto_bin, true);
    return true;
}

bool TheClass::FromBase64(const string &b64) {
    bool ok = true;

    string data = safeheron::encode::base64::DecodeFromBase64(b64);

    ProtoObject proto_object;
    ok = proto_object.ParseFromString(data);
    if (!ok) return false;

    return FromProtoObject(proto_object);
}

bool TheClass::ToJsonString(string &json_str) const {
    bool ok = true;
    json_str.clear();
    ProtoObject proto_object;
    ok = ToProtoObject(proto_object);
    if (!ok) return false;

    JsonPrintOptions jp_option;
    jp_option.add_whitespace = true;
    Status stat = MessageToJsonString(proto_object, &json_str, jp_option);
    if (!stat.ok()) return false;

    return true;
}


bool TheClass::FromJsonString(const string &json_str) {
    ProtoObject proto_object;
    google::protobuf::util::JsonParseOptions jp_option;
    jp_option.ignore_unknown_fields = true;
    Status stat = JsonStringToMessage(json_str, &proto_object);
    if (!stat.ok()) return false;

    return FromProtoObject(proto_object);
}

}
}
}
