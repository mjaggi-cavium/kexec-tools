/*
 * ARM64 crashdump.
 *
 * Copyright (c) 2014-2016 Linaro Limited
 * Author: AKASHI Takahiro <takahiro.akashi at linaro.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef CRASHDUMP_ARM64_H
#define CRASHDUMP_ARM64_H

#include "kexec.h"

#define CRASH_MAX_MEMORY_RANGES	32

extern struct memory_ranges crash_memory_rgns;
extern struct memory_ranges usablemem_rgns;
extern struct memory_range crash_reserved_mem;
extern struct memory_range elfcorehdr_mem;

extern int load_crashdump_segments(struct kexec_info *info);
extern void modify_ehdr_for_crashdump(struct mem_ehdr *ehdr);
extern void *fixup_memory_properties(void *dtb_buf);

#endif /* CRASHDUMP_ARM64_H */
