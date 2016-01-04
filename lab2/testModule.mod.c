#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x845e72f6, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3de89cef, __VMLINUX_SYMBOL_STR(param_ops_long) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdc207cb6, __VMLINUX_SYMBOL_STR(add_integer) },
	{ 0xcb323af9, __VMLINUX_SYMBOL_STR(sub_integer) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=add_sub";


MODULE_INFO(srcversion, "653B2842DDAE9DC61B8F444");
