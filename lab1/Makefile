ifeq ($(KERNELRELEASE),)
	KERNELDIR ?= /home/user1/linux-3.19
	PWD := $(shell pwd)
modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions
else
	obj-m := HelloWorld.o
endif
