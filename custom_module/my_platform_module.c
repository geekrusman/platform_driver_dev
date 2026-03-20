#include <linux/module.h>
#include <linux/platform_device.h>

static int my_pdrv_probe(struct platform_device *pdev)
{
    pr_info("Custom Platform Module: Probed\n");
    return 0;
}

static int my_pdrv_remove(struct platform_device *pdev)
{
    pr_info("Custom Platform Module: Removed\n");
    return 0;
}

static struct platform_driver my_pdrv = {
    .probe      = my_pdrv_probe,
    .remove     = my_pdrv_remove,
    .driver     = {
        .name   = "my_custom_device",
        .owner  = THIS_MODULE,
    },
};

module_platform_driver(my_pdrv);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple out-of-tree platform driver");