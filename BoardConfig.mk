#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from sm7250-common
include device/xiaomi/sm7250-common/BoardConfigCommon.mk

DEVICE_PATH := device/xiaomi/vangogh

BUILD_BROKEN_DUP_RULES := true

# Display
TARGET_SCREEN_DENSITY := 440

# Init
TARGET_INIT_VENDOR_LIB := //$(DEVICE_PATH):init_xiaomi_vangogh
TARGET_RECOVERY_DEVICE_MODULES := init_xiaomi_vangogh

# Properties
TARGET_VENDOR_PROP += $(DEVICE_PATH)/vendor.prop

# Inherit from the proprietary version
include vendor/xiaomi/vangogh/BoardConfigVendor.mk
