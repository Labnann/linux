
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

/*global variables that are to be set from
*command line as args
*/

char *mystring = "to_be_set";

/*
* set up cmmand line arguement mechanism for
* global variables
*/

module_param(mystring, charp, 0000);

static int __init hello_world_init(void)
{
	printk(KERN_INFO "mymodule1 Hello world!\n");
	printk(KERN_INFO "%s\n", mystring);
	printk(KERN_INFO "Done Printing");
	
	return 0;
}

static void __exit hello_world_cleanup(void)
{
	printk(KERN_INFO "mymodule1e Clean up Hello World.\n");
}


module_init(hello_world_init);
module_exit(hello_world_cleanup);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
