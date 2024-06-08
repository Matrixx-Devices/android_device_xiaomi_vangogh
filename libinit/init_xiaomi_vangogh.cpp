/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t vangogh_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "vangogh",
    .marketname = "Mi 10 Lite Zoom",
    .model = "M2002J9E",
    .build_fingerprint = "Xiaomi/vangogh/vangogh:11/RKQ1.200826.002/V12.1.7.0.RJVCNXM:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    vangogh_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
