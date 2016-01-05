obj-m := testModule.o
KERNELDIR ?= /home/user1/linux-3.19
PWD := $(shell pwd)
SYMBOL_INC = $(obj)/../include
EXTRA_CFLAGS += -I $(SYMBOL_INC)
KBUILD_EXTRA_SYMBOLS = /home/user1/repository/LinuxDriverTest/lab2/add_sub/Module.symvers
modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
clean:
	rm -rf *.order *.symvers *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions .PHONY: modules modules_install clean
