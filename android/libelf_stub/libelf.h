/*
 * Copyright (C) 2026 The Android Open Source Project
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

/*
 * Minimal stand-in for elfutils' <libelf.h>, used only by libbpf_minimal.
 *
 * libbpf_minimal does not call into libelf. src/libbpf_internal.h includes
 * <libelf.h> only to get the opaque `Elf` type for prototypes of ELF helpers
 * that are not compiled into libbpf_minimal. Providing that type here avoids
 * depending on libelf (elfutils) at all.
 */
#pragma once

#include <elf.h>

typedef struct Elf Elf;
