#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
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
__used __section(__versions) = {
	{ 0x9de7765d, "module_layout" },
	{ 0x69de56ed, "param_ops_int" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x30a80826, "__kfifo_from_user" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x2142178f, "cdev_del" },
	{ 0x19c48f0b, "cdev_add" },
	{ 0x18f0dc72, "cdev_init" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x281823c5, "__kfifo_out_peek" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67c0c54c, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F21B3DB180306C2AF39BCD");
