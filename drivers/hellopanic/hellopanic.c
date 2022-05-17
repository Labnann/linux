
// SPDX-License-Identifier: GPL-2.0-or-later
/*
 *      hellopanic.c  -- Hello World Panic module
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR		"Khalid Masum" \
				"<khalid.masum.92@gmail.com>"
#define DRIVER_DESC		"Hello Panic module"


static int __init hello_panic_module_init(void)
{
	    printk(KERN_ALERT ": Start panicking.\n");
	    panic("hellopanicmodule: Cause panic with panic().\n");
	    printk(KERN_ALERT ": Panic module executed panic()");
	    return 0;
}

static void __exit hello_panic_module_cleanup(void)
{
	    printk( "hellopanicmodule: Is it worth cleaning up?.\n");
}

/* Register the module */
module_init(hello_panic_module_init);
module_exit(hello_panic_module_cleanup);

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");

