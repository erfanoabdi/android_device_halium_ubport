#ifndef ANDROID_SYSTEM_NET_NETD_V1_1_NETD_H
#define ANDROID_SYSTEM_NET_NETD_V1_1_NETD_H

#include <android/system/net/netd/1.1/INetd.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace android {
namespace system {
namespace net {
namespace netd {
namespace V1_1 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Netd : public INetd {
    // Methods from ::android::system::net::netd::V1_0::INetd follow.
    Return<void> createOemNetwork(createOemNetwork_cb _hidl_cb) override;
    Return<::android::system::net::netd::V1_0::INetd::StatusCode> destroyOemNetwork(uint64_t networkHandle) override;

    // Methods from ::android::system::net::netd::V1_1::INetd follow.
    Return<::android::system::net::netd::V1_0::INetd::StatusCode> addRouteToOemNetwork(uint64_t networkHandle, const hidl_string& ifname, const hidl_string& destination, const hidl_string& nexthop) override;
    Return<::android::system::net::netd::V1_0::INetd::StatusCode> removeRouteFromOemNetwork(uint64_t networkHandle, const hidl_string& ifname, const hidl_string& destination, const hidl_string& nexthop) override;
    Return<::android::system::net::netd::V1_0::INetd::StatusCode> addInterfaceToOemNetwork(uint64_t networkHandle, const hidl_string& ifname) override;
    Return<::android::system::net::netd::V1_0::INetd::StatusCode> removeInterfaceFromOemNetwork(uint64_t networkHandle, const hidl_string& ifname) override;
    Return<::android::system::net::netd::V1_0::INetd::StatusCode> setIpForwardEnable(bool enable) override;
    Return<::android::system::net::netd::V1_0::INetd::StatusCode> setForwardingBetweenInterfaces(const hidl_string& inputIfName, const hidl_string& outputIfName, bool enable) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" INetd* HIDL_FETCH_INetd(const char* name);

}  // namespace implementation
}  // namespace V1_1
}  // namespace netd
}  // namespace net
}  // namespace system
}  // namespace android

#endif  // ANDROID_SYSTEM_NET_NETD_V1_1_NETD_H
