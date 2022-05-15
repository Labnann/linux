// SPDX-License-Identifier: GPL-2.0-or-later
/*
 *      hellomodule.c  -- Hello World module
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


#define DRIVER_AUTHOR		"Khalid Masum" \
				"<khalid.masum.92@gmail.com>"
#define DRIVER_DESC		"Hello World module"



static int __init hello_world_init(void)
{
	printk("mymodule1 Hello world!\n");
	return 0;
}

static void __exit hello_world_cleanup(void)
{
	printk("mymodule1e Clean up Hello World.\n");
}

module_init(hello_world_init);
module_exit(hello_world_cleanup);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");

