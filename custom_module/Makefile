obj-m += my_platform_module.o

# KDIR defaults to the host machine's kernel, but we will override it in CI
KDIR ?= /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean