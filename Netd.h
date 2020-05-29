/*
 * Copyright 2020 UBports foundation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Erfan Abdi <erfanplus@gmail.com>
 */

#ifndef ANDROID_SYSTEM_NET_NETD_V1_1_NETD_H
#define ANDROID_SYSTEM_NET_NETD_V1_1_NETD_H

#include <android/system/net/netd/1.1/INetd.h>
#include <hidl/Status.h>

namespace android {
namespace system {
namespace net {
namespace netd {
namespace V1_1 {
namespace implementation {

using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

using StatusCode = android::system::net::netd::V1_1::INetd::StatusCode;

struct Netd : public INetd {
    // Methods from ::android::system::net::netd::V1_0::INetd follow.
    Return<void> createOemNetwork(createOemNetwork_cb _hidl_cb) override;
    Return<StatusCode> destroyOemNetwork(uint64_t networkHandle) override;

    // Methods from ::android::system::net::netd::V1_1::INetd follow.
    Return<StatusCode> addRouteToOemNetwork(uint64_t networkHandle, const hidl_string& ifname, const hidl_string& destination, const hidl_string& nexthop) override;
    Return<StatusCode> removeRouteFromOemNetwork(uint64_t networkHandle, const hidl_string& ifname, const hidl_string& destination, const hidl_string& nexthop) override;
    Return<StatusCode> addInterfaceToOemNetwork(uint64_t networkHandle, const hidl_string& ifname) override;
    Return<StatusCode> removeInterfaceFromOemNetwork(uint64_t networkHandle, const hidl_string& ifname) override;
    Return<StatusCode> setIpForwardEnable(bool enable) override;
    Return<StatusCode> setForwardingBetweenInterfaces(const hidl_string& inputIfName, const hidl_string& outputIfName, bool enable) override;
};

}  // namespace implementation
}  // namespace V1_1
}  // namespace netd
}  // namespace net
}  // namespace system
}  // namespace android

#endif  // ANDROID_SYSTEM_NET_NETD_V1_1_NETD_H
