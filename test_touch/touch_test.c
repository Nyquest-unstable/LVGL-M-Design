#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <unistd.h>
#include <linux/input.h>

/*
# 编译
export PATH=$PATH:/home/ubuntu/100ask/T113s4_Lvgl9-Class_TinaSDK-V1/prebuilt/rootfsbuilt/arm/toolchain-sunxi-glibc-gcc-830/toolchain/bin
export CROSS_COMPILE=arm-openwrt-linux-gnueabi
export STAGING_DIR=/home/ubuntu/100ask/T113s4_Lvgl9-Class_TinaSDK-V1/out/t113_s4/100ask_lvgl9/openwrt/staging_dir/target

arm-openwrt-linux-gnueabi-gcc touch_test.c -o touch_test

# 在ubuntu连接开发板的adb
adb push ./touch_test /mnt/UDISK

# 运行
./touch_test /dev/input/event4
*/
int main(int argc, char *argv[]) {
	int x = 0;  //触摸点 x和 y坐标 
	int y = 0;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s /dev/input/eventX\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char *device_path = argv[1];
    int fd = open(device_path, O_RDONLY | O_NOCTTY | O_CLOEXEC);
    if (fd == -1) {
        perror("Failed to open device");
        exit(EXIT_FAILURE);
    }

    if(fcntl(fd, F_SETFL, O_NONBLOCK) < 0)
	{
        perror("Failed to fcntl device");
        exit(EXIT_FAILURE);
    }

    printf("Listening for events on %s...\n", device_path);

    struct input_event in_ev = { 0 };
    while (1) {
        while(read(fd, &in_ev, sizeof(in_ev)) > 0) {
            if(in_ev.type == EV_REL) {
                if(in_ev.code == REL_X) x += in_ev.value;
                else if(in_ev.code == REL_Y) y += in_ev.value;
            }
            else if(in_ev.type == EV_ABS) { 
                if(in_ev.code == ABS_X || in_ev.code == ABS_MT_POSITION_X) x = in_ev.value;
                else if(in_ev.code == ABS_Y || in_ev.code == ABS_MT_POSITION_Y) y = in_ev.value;
                else if(in_ev.code == ABS_MT_TRACKING_ID) {
                    if(in_ev.value == -1)       printf("松开 (x:%d, y:%d)\n", x, y);
                    else if(in_ev.value == 0)   printf("按下 (x:%d, y:%d)\n", x, y);
                }
            }
            else if(in_ev.type == EV_KEY) {
                if(in_ev.code == BTN_MOUSE || in_ev.code == BTN_TOUCH) {
                    if(in_ev.value == 0)        printf("松开 (x:%d, y:%d)\n", x, y);
                    else if(in_ev.value == 1)   printf("按下 (x:%d, y:%d)\n", x, y);
                }

            }
        }
        usleep(30000);
    }

    close(fd);
    return 0;
}