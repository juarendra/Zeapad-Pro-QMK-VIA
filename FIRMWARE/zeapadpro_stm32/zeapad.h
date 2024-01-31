// Copyright 2022 Victor Lucachi (@victorlucachi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT_via_ORTO( \
    k00, k01, k02, k03, k04,\
    k10, k11, k12, k13, k14,\
    k20, k21, k22, k23, k24\
    k30, k31, k32, k33, k34 \
) \
{ \
    { k00, k01, k02, k03 , k04}, \
    { k10, k11, k12, k13 , k14}, \
    { k20, k21, k22, k23 , k24}, \
    { k30, k31, k32, k33 , k34}, \
}
