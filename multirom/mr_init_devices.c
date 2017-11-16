#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    // FrameBuffers
    "/sys/class/graphics/fb0",

    // Storage devices
    "/sys/dev/block*",
    "/sys/block/mmcblk0",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    // Internal storage
    "/sys/block/mmcblk0rpmb",
    "/dev/block/bootdevice/by-name/*",
    "/sys/devices/soc/7464900.sdhci",
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0",
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/*",
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p14", // boot
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p43", // keymaster
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p24", // modem
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p38", // modemst1
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p39", // modemst2
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p40", // cache
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p41", // persist
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p37", // ssd
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p17", // system
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p47", // userdata
    "/sys/devices/soc/7464900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0rpmb", // RPMB

    // External storage
    "/sys/block/mmcblk1",
    "/sys/block/mmcblk1",
    "/sys/block/mmcblk1/mmcblk1p1",
    "/sys/block/mmcblk1/mmcblk1p2",

    // Devices
    "/sys/bus*",
    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/devices*",
    "/sys/devices/virtual/mem/null",
    "/sys/devices/virtual/misc/fuse",

    // Inputs
    "/sys/class/input/event*",
    "/sys/class/input/input*",
    "/sys/class/misc/uinput",
    "/sys/class/tty/ptmx",
    "/sys/devices/soc/soc:gpio_keys/input*",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/soc/75ba000.i2c/i2c-12/12-002c/clearpad",

    // ADB
    "/sys/devices/virtual/tty/ptmx",
    "/sys/bus/usb",
    "/sys/bus/usb-serial",
    "/sys/class/android_usb/android0/f_adb",
    "/sys/class/misc/android_adb",
    "/sys/devices/virtual/misc/mtp_usb",

    // USB
    "/sys/bus/usb",
    "/sys/bus/platform/drivers/xhci-hcd*",
    "/sys/devices/soc/6a00000.ssusb/6a00000.dwc3",

    // Encryption
    "/sys/devices/virtual/icesdcc/icesdcc",
    "/sys/devices/virtual/misc/device-mapper",
    "/sys/devices/virtual/misc/ion",
    "/sys/devices/virtual/qseecom/qseecom",

    // Logging
    "/sys/devices/virtual/mem/kmsg",

    NULL
};

