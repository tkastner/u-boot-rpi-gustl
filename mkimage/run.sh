#!/bin/zsh

inf() {
  echo "INFO: ${1}"
}

SD_DIR=/media/D5C1-EF53
KERNEL_IMG=kernel.img
UBOOT=u-boot.bin

if [[ -e $KERNEL_IMG ]]; then
  inf "Remove existing kernel..."
  rm $KERNEL_IMG
fi

if [[ -e $UBOOT  ]]; then
  inf "Remove u-boot binary..."
  rm $UBOOT
fi

cp ../$UBOOT .

inf "Converting binary to kernel.img..."
./imagetool-uncompressed.py $UBOOT

if [[ -e $SD_DIR/$KERNEL_IMG ]]; then
  inf "Remove image on SD-card..."
  rm $SD_DIR/$KERNEL_IMG
fi

inf "Copying kernel"
cp $KERNEL_IMG $SD_DIR/

sleep 2

inf "Unmounting..."
sudo umount /media/*
