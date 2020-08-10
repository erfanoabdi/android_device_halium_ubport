#
# Copyright (C) 2020 The LineageOS Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/product_launched_with_p.mk)

# Inherit from phh vndk vendor.
$(call inherit-product, vendor/vndk/vndk-binder32.mk)

# Inherit some common Lineage stuff
$(call inherit-product, $(SRC_TARGET_DIR)/product/halium.mk)

# Inherit device
$(call inherit-product, $(LOCAL_PATH)/device.mk)

# Inherit fonts
$(call inherit-product-if-exists, frameworks/base/data/fonts/fonts.mk)

PRODUCT_BRAND := halium
PRODUCT_DEVICE := ubport
PRODUCT_MANUFACTURER := halium
PRODUCT_NAME := lineage_ubport
PRODUCT_MODEL := Ubuntu Touch
