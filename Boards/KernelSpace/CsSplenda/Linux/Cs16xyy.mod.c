#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xaf381eb0, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x59acc80d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x75f8d3b8, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe7e7f548, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0xd24e1cd2, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0xad27f361, __VMLINUX_SYMBOL_STR(__warn_printk) },
	{ 0xab3d033d, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x93f91ea9, __VMLINUX_SYMBOL_STR(pci_write_config_byte) },
	{ 0x778b8af3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x15ba50a6, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb98c4938, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xea9f6313, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xa6682fdd, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb44ad4b3, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xd13df821, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2dd414a0, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x9b65a65f, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcd484d18, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xde1d0594, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x9c079d54, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1bb50bc, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xd6745169, __VMLINUX_SYMBOL_STR(put_zone_device_private_or_public_page) },
	{ 0x9a6085d4, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x665550f8, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x8ff4079b, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x222e1b1b, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x709cd62a, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xcbd4898c, __VMLINUX_SYMBOL_STR(fortify_panic) },
	{ 0xd7b64983, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfe768495, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x237a015a, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x844b4a3d, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x443a65ef, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa215d621, __VMLINUX_SYMBOL_STR(send_sig_info) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf05c7b8, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r15) },
	{ 0x6c09ee05, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xd4fa5c30, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa948e10, __VMLINUX_SYMBOL_STR(device_private_key) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x198787b0, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xcbac4b66, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x3f20549c, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xc1514a3b, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E8BEE921E9EF503750FA73F");
