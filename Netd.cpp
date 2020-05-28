#include "Netd.h"

namespace android {
namespace system {
namespace net {
namespace netd {
namespace V1_1 {
namespace implementation {

// Methods from ::android::system::net::netd::V1_0::INetd follow.
Return<void> Netd::createOemNetwork(createOemNetwork_cb _hidl_cb) {
    // TODO implement
    return Void();
}

Return<::android::system::net::netd::V1_0::INetd::StatusCode> Netd::destroyOemNetwork(uint64_t networkHandle) {
    // TODO implement
    return ::android::system::net::netd::V1_0::INetd::StatusCode {};
}


// Methods from ::android::system::net::netd::V1_1::INetd follow.
Return<::android::system::net::netd::V1_0::INetd::StatusCode> Netd::addRouteToOemNetwork(uint64_t networkHandle, const hidl_string& ifname, const hidl_string& destination, const hidl_string& nexthop) {
    // TODO implement
    return ::android::system::net::netd::V1_0::INetd::StatusCode {};
}

Return<::android::system::net::netd::V1_0::INetd::StatusCode> Netd::removeRouteFromOemNetwork(uint64_t networkHandle, const hidl_string& ifname, const hidl_string& destination, const hidl_string& nexthop) {
    // TODO implement
    return ::android::system::net::netd::V1_0::INetd::StatusCode {};
}

Return<::android::system::net::netd::V1_0::INetd::StatusCode> Netd::addInterfaceToOemNetwork(uint64_t networkHandle, const hidl_string& ifname) {
    // TODO implement
    return ::android::system::net::netd::V1_0::INetd::StatusCode {};
}

Return<::android::system::net::netd::V1_0::INetd::StatusCode> Netd::removeInterfaceFromOemNetwork(uint64_t networkHandle, const hidl_string& ifname) {
    // TODO implement
    return ::android::system::net::netd::V1_0::INetd::StatusCode {};
}

Return<::android::system::net::netd::V1_0::INetd::StatusCode> Netd::setIpForwardEnable(bool enable) {
    // TODO implement
    return ::android::system::net::netd::V1_0::INetd::StatusCode {};
}

Return<::android::system::net::netd::V1_0::INetd::StatusCode> Netd::setForwardingBetweenInterfaces(const hidl_string& inputIfName, const hidl_string& outputIfName, bool enable) {
    // TODO implement
    return ::android::system::net::netd::V1_0::INetd::StatusCode {};
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//INetd* HIDL_FETCH_INetd(const char* /* name */) {
    //return new Netd();
//}
//
}  // namespace implementation
}  // namespace V1_1
}  // namespace netd
}  // namespace net
}  // namespace system
}  // namespace android
