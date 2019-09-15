// Definiendo __KERNEL__ and MODULE nos permite acceder a nivel de kernel.
root@debian#undef __KERNEL__
root@debian#define __KERNEL__
root@debian#undef MODULE
root@debian#define MODULE

// Linux Kernel/LKM headers: module.h es necesario para todos los modulos y kernel.h 
//y tambien para para KERN_INFO.
root@debian#include <linux/module.h>    // Incluido para todos los modulos de kernel
root@debian#include <linux/kernel.h>    // Incluido para KERN_INFO
root@debian#include <linux/init.h>        // Incluido para __init y __exit macros

static int __init memo_init(void)
{
   printk(KERN_INFO "201503393\n"); //Se loga en el log del sistema
   //Aqui iria el codigo a ejecutar
   return 0;    
}

static void __exit memo_exit(void)
{
   printk(KERN_INFO "Sistemas Operativos 1\n"); 
}
module_init(memo_init);
module_exit(memo_exit);


MODULELICENSE("SOpes1");
MODULEAUTHOR("Jose Daniel De Leon Ruiz");
MODULEDESCRIPTION("Practica 2");
MODULESUPPORTEDDEVICE("XD");
