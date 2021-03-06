/*
* Samsung debugging features for Samsung's SoC's.
*
* Copyright (c) 2016 Samsung Electronics Co., Ltd.
*      http://www.samsung.com
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*/

#ifndef SEC_DEBUG_H
#define SEC_DEBUG_H

#include <linux/sizes.h>
#include <linux/memblock.h>
#include <linux/module.h>
#include <linux/reboot.h>

#define SEC_DEBUG_MAGIC_PA memblock_start_of_DRAM()
#define SEC_DEBUG_MAGIC_VA phys_to_virt(SEC_DEBUG_MAGIC_PA)
#define SEC_DEBUG_EXTRA_INFO_VA (SEC_DEBUG_MAGIC_VA + 0x400)
#define SEC_DEBUG_DUMPER_LOG_VA (SEC_DEBUG_MAGIC_VA + 0x800)

#ifdef CONFIG_SEC_DEBUG
extern int  sec_debug_init(void);
extern void sec_debug_reboot_handler(void);
extern void sec_debug_panic_handler(void *buf, bool dump);
extern void sec_debug_post_panic_handler(void);

extern int  sec_debug_get_debug_level(void);
extern void sec_debug_disable_printk_process(void);

/* getlog support */
extern void sec_getlog_supply_kernel(void *klog_buf);
extern void sec_getlog_supply_platform(unsigned char *buffer, const char *name);
extern void sec_gaf_supply_rqinfo(unsigned short curr_offset, unsigned short rq_offset);
#else
#define sec_debug_init()			(-1)
#define sec_debug_reboot_handler()		do { } while(0)
#define sec_debug_panic_handler(a,b)		do { } while(0)
#define sec_debug_post_panic_handler()		do { } while(0)

#define sec_debug_get_debug_level()		(0)
#define sec_debug_disable_printk_process()	do { } while(0)

#define sec_getlog_supply_kernel(a)		do { } while(0)
#define sec_getlog_supply_platform(a,b)		do { } while(0)

#define sec_gaf_supply_rqinfo(a,b)		do { } while(0)
#endif /* CONFIG_SEC_DEBUG */

#ifdef CONFIG_SEC_DEBUG_RESET_REASON

enum sec_debug_reset_reason_t {
	RR_S = 1,
	RR_W = 2,
	RR_D = 3,
	RR_K = 4,
	RR_M = 5,
	RR_P = 6,
	RR_R = 7,
	RR_B = 8,
	RR_N = 9,
	RR_T = 10,
};

extern unsigned reset_reason;
#endif

union sec_debug_level_t {
	struct {
		u16 kernel_fault;
		u16 user_fault;
	} en;
	u32 uint_val;
};

#ifdef CONFIG_SEC_DEBUG_EXTRA_INFO

#define MAX_EXTRA_INFO_HDR_LEN	6
#define MAX_EXTRA_INFO_KEY_LEN	16
#define MAX_EXTRA_INFO_VAL_LEN	256
#define SEC_DEBUG_BADMODE_MAGIC	0x6261646d

enum sec_debug_extra_buf_type {
	INFO_KTIME,
	INFO_FAULT,
	INFO_BUG,
	INFO_PANIC,
	INFO_PC,
	INFO_LR,
	INFO_STACK,
	INFO_REASON,
	INFO_EVT,
	INFO_SYSMMU,
	INFO_BUSMON,
	INFO_DPM,
	INFO_SMPL,
	INFO_ETC,
	INFO_ESR,
	INFO_MERR,
	INFO_PCB,
	INFO_SMD,
	INFO_CHI,
	INFO_LPI,
	INFO_CDI,
	INFO_KLG,
	INFO_LR0,
	INFO_LEVEL,
	INFO_DECON,
	INFO_WAKEUP,
	INFO_BATT,
	INFO_MAX,
};

struct sec_debug_extra_info_item {
	char key[MAX_EXTRA_INFO_KEY_LEN];
	char val[MAX_EXTRA_INFO_VAL_LEN];
	unsigned int max;
};

struct sec_debug_panic_extra_info {
	struct sec_debug_extra_info_item item[INFO_MAX];
};

#endif

#if 1	/* TODO : MOVE IT LATER */

#define SEC_DEBUG_SHARED_MAGIC0 0xFFFFFFFF
#define SEC_DEBUG_SHARED_MAGIC1 0x95308180
#define SEC_DEBUG_SHARED_MAGIC2 0x14F014F0
#define SEC_DEBUG_SHARED_MAGIC3 0x00010001

struct sec_debug_ksyms {
	uint32_t magic;
	uint32_t kallsyms_all;
	uint64_t addresses_pa;
	uint64_t names_pa;
	uint64_t num_syms;
	uint64_t token_table_pa;
	uint64_t token_index_pa;
	uint64_t markers_pa;
	uint64_t sinittext;
	uint64_t einittext;
	uint64_t stext;
	uint64_t etext;
	uint64_t end;
};

struct sec_debug_shared_info {
	/* initial magic code */	
	unsigned int magic[4];

#ifdef CONFIG_SEC_DEBUG_EXTRA_INFO	
	/* ksymbol information */
	struct sec_debug_ksyms ksyms;

	/* reset reason extra info for bigdata */
	struct sec_debug_panic_extra_info sec_debug_extra_info;

	/* last 1KB of kernel log */
	char last_klog[SZ_1K];
#endif	
};

#ifdef CONFIG_SEC_DEBUG_EXTRA_INFO
extern void sec_debug_set_kallsyms_info(struct sec_debug_shared_info *sec_debug_info);
#endif

#endif	/* TODO : MOVE IT LATER */

#ifdef CONFIG_SEC_DEBUG_EXTRA_INFO

extern unsigned long merr_symptom;
extern struct exynos_chipid_info exynos_soc_info;
extern unsigned int get_smpl_warn_number(void);

extern void sec_debug_init_extra_info(struct sec_debug_shared_info *);
extern void sec_debug_finish_extra_info(void);
extern void sec_debug_store_extra_info(void);
extern void sec_debug_set_extra_info_ktime(void);
extern void sec_debug_set_extra_info_fault(unsigned long addr, struct pt_regs *regs);
extern void sec_debug_set_extra_info_bug(const char *file, unsigned int line);
extern void sec_debug_set_extra_info_panic(char *str);
extern void sec_debug_set_extra_info_backtrace(struct pt_regs *regs);
extern void sec_debug_set_extra_info_evt_version(void);
extern void sec_debug_set_extra_info_sysmmu(char *str);
extern void sec_debug_set_extra_info_busmon(char *str);
extern void sec_debug_set_extra_info_dpm_timeout(char *devname);
extern void sec_debug_set_extra_info_smpl(unsigned int count);
extern void sec_debug_set_extra_info_esr(unsigned int esr);
extern void sec_debug_set_extra_info_merr(void);
extern void sec_debug_set_extra_info_decon(unsigned int err);
extern void sec_debug_set_extra_info_batt(int cap, int volt, int temp, int curr);
extern void sec_debug_set_extra_info_ufs_error(char *str);
extern void sec_debug_set_extra_info_zswap(char *str);
extern void sec_debug_set_extra_info_mfc_error(char *str);

#else

#define sec_debug_init_extra_info(a)	do { } while (0)
#define sec_debug_finish_extra_info()	do { } while (0)
#define sec_debug_store_extra_info()	do { } while (0)
#define sec_debug_set_extra_info_ktime()	do { } while (0)
#define sec_debug_set_extra_info_fault(a, b)	do { } while (0)
#define sec_debug_set_extra_info_bug(a, b)	do { } while (0)
#define sec_debug_set_extra_info_panic(a)	do { } while (0)
#define sec_debug_set_extra_info_backtrace(a)	do { } while (0)
#define sec_debug_set_extra_info_evt_version()	do { } while (0)
#define sec_debug_set_extra_info_sysmmu(a)	do { } while (0)
#define sec_debug_set_extra_info_busmon(a)	do { } while (0)
#define sec_debug_set_extra_info_dpm_timeout(a)	do { } while (0)
#define sec_debug_set_extra_info_smpl(a)	do { } while (0)
#define sec_debug_set_extra_info_esr(a)		do { } while (0)
#define sec_debug_set_extra_info_merr()		do { } while (0)
#define sec_debug_set_extra_info_decon(a)	do { } while (0)
#define sec_debug_set_extra_info_batt(a, b, c, d)	do { } while (0)
#define sec_debug_set_extra_info_ufs_error(a)	do { } while (0)
#define sec_debug_set_extra_info_zswap(a)	do { } while (0)
#define sec_debug_set_extra_info_mfc_error(a)	do { } while (0)

#endif /* CONFIG_SEC_DEBUG_EXTRA_INFO */

#ifdef CONFIG_SEC_DEBUG_AUTO_SUMMARY
extern void sec_debug_auto_summary_log_disable(int type);
extern void sec_debug_auto_summary_log_once(int type);
extern void register_set_auto_comm_buf(void (*func)(int type, const char *buf, size_t size));
extern void register_set_auto_comm_lastfreq(void (*func)(int type, int old_freq, int new_freq, u64 time));
#endif

#ifdef CONFIG_SEC_DEBUG_LAST_KMSG
#define SEC_LKMSG_MAGICKEY 0x0000000a6c6c7546
extern void sec_debug_save_last_kmsg(unsigned char *head_ptr, unsigned char *curr_ptr, size_t buf_size);
#else
#define sec_debug_save_last_kmsg(a, b, c)		do { } while (0)
#endif /* CONFIG_SEC_DEBUG_LAST_KMSG */

extern bool exynos_ss_hardkey_triger;
extern int dbglv_mid;
extern union sec_debug_level_t sec_debug_level;
extern void (*mach_restart)(enum reboot_mode mode, const char *cmd);

/*
 * Samsung TN Logging Options
 */
#ifdef CONFIG_SEC_AVC_LOG
extern void sec_debug_avc_log(char *fmt, ...);
#else
#define sec_debug_avc_log(a, ...)		do { } while (0)
#endif /* CONFIG_SEC_AVC_LOG */

/**
 * sec_debug_tsp_log : Leave tsp log in tsp_msg file.
 * ( Timestamp + Tsp logs )
 * sec_debug_tsp_log_msg : Leave tsp log in tsp_msg file and
 * add additional message between timestamp and tsp log.
 * ( Timestamp + additional Message + Tsp logs )
 */
#ifdef CONFIG_SEC_DEBUG_TSP_LOG
extern void sec_debug_tsp_log(char *fmt, ...);
extern void sec_debug_tsp_log_msg(char *msg, char *fmt, ...);
#if defined(CONFIG_TOUCHSCREEN_FTS)
extern void tsp_dump(void);
#elif defined(CONFIG_TOUCHSCREEN_SEC_TS)
extern void tsp_dump_sec(void);
#endif
#else
#define sec_debug_tsp_log(a, ...)		do { } while (0)
#define sec_debug_tsp_log_msg(a, b, ...)	do { } while (0)
#endif /* CONFIG_SEC_DEBUG_TSP_LOG */

extern int sec_debug_force_error(const char *val, struct kernel_param *kp);

#endif /* SEC_DEBUG_H */
