#!/bin/bash
echo -e "Go to the command execution directory "
cd ..
cd ..
cd ..
echo -e "make clean"
make clean
echo -e "source build/envsetup.sh"
source build/envsetup.sh
echo -e "lunch cm_nx531j-eng"
lunch cm_nx531j-eng
echo -e "mka recovery.img"
mka recoveryimage
echo -e "\033[01;32mboot_signer boot.img...\033[0m"
java -Xmx512M -jar device/nubia/nx531j/bootsignature/BootSignature.jar /recovery out/target/product/nx531j/recovery.img device/nubia/nx531j/bootsignature/verity.pk8 device/nubia/nx531j/bootsignature/verity.x509.pem out/target/product/nx531j/recovery.img

