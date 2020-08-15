
Device configuration for Halium Ubuntu Touch (ubport)
==================================
`This branch supports the arm32 version on Ubports GSI`

# How to build
### Get build tools

`If you are on the amd64 architecture (commonly referred to as 64 bit), enable the usage of the i386 architecture:`
```sh
$ sudo dpkg --add-architecture i386
```
`Update your package lists to take advantage of the new architecture:`

```sh
$ sudo apt update
```

`Install the required dependencies:`

```sh
$ sudo apt install git gnupg flex bison gperf build-essential \
  zip bzr curl libc6-dev libncurses5-dev:i386 x11proto-core-dev \
  libx11-dev:i386 libreadline6-dev:i386 libgl1-mesa-glx:i386 \
  libgl1-mesa-dev g++-multilib mingw-w64-i686-dev tofrodos \
  python-markdown libxml2-utils xsltproc zlib1g-dev:i386 schedtool \
  repo liblz4-tool bc lzop imagemagick libncurses5 rsync
  ```
`If there are missing dependency errors, the easiest solution is to switch to Ubuntu 18.04 LTS`
#### Get sources
```sh 
$ mkdir ~/halium-9.0 && cd ~/halium-9.0
$ repo init -u https://github.com/Halium/android -b halium-9.0 --depth=1
```
`You have to setup repo if using for first time`
```sh
$ repo sync
```
#### Apply Patches
```sh
$ hybris-patches/apply-patches.sh --mb
```
#### Place GSI device tree
```sh 
$ mkdir device/halium && cd device/halium
$ git clone <this repo>
$ mv <cloned folder> ubport
```
`Place this repo under ~/halium-9.0/device/halium`

### Delete these to avoid confusion
```sh
$ cd ~/halium-9.0/halium
$ rm -r fake_crypt stub_netd
```
`These files we deleted already exists in the GSI device tree`
`We deleted it to avoid the source tree build errors`

### Inherit from phh vndk
```sh
$ cd ~/halium-9.0/vendor
$ git clone https://github.com/phhusson/vendor_vndk
$ mv vendor_vndk vndk
```
`The device tree depends on the phh vndk`

Credits to @phhusson

### Start the build
```sh
$ cd ~/halium-9.0/
$ source build/envsetup.sh && breakfast <YOUR_DEVICE_CODENAME>
$ mka systemimage
```
