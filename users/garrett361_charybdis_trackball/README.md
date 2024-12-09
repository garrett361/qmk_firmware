Compile as

```bash

qmk compile -kb bastardkb/charybdis/v2/splinky_3 -km garrett361_charbydis_trackball
```

You will get `Invalid LAYOUT macro in keyboards/bastardkb/charybdis/3x5/3x5.h: Key ___ in macro LAYOUT_split_3x5_3 has no matrix position!` warnings.

Install instructions. Need to:

```bash
brew install arm-gcc-bin
brew install avr-gcc
```

See [this link](https://github.com/qmk/qmk_firmware/issues/22291) if a missing `assert.h` header error is found. Has to do with toolchain versioning issues. [Also this link.](https://www.reddit.com/r/olkb/comments/koww09/qmk_setup_troubles_cant_find_in_path_during_qmk/?rdt=37543)

# Read-Only Issue

If they keyboard is loaded read-only: [follow this link.](https://apple.stackexchange.com/a/345229)

```bash
diskutil list
sudo diskutil unmount /dev/disk2s1 <- (put your volume/partition in here)
cd /Volumes
sudo mkdir <FOLDER_NAME>
sudo mount -w -t msdos /dev/disk2s1 /Volumes/<FOLDER_NAME>
```
