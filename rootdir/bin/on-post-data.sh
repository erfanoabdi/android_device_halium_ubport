#!/system/bin/sh

if grep -qF android.hardware.boot /vendor/manifest.xml || grep -qF android.hardware.boot /vendor/etc/vintf/manifest.xml ;then
    bootctl mark-boot-successful
fi
