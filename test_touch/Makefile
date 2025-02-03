# 设置交叉编译工具链的路径
export PATH := $(PATH):/home/zc/Coremp135/CoreMP135_buildroot/output/host/bin

# 设置交叉编译前缀
export CROSS_COMPILE := arm-buildroot-linux-gnueabihf-

# 定义目标文件和源文件
TARGET := touch_test
SOURCE := touch_test.c

# 定义目标文件的存放路径
NFS_PATH := ~/NetFloder/nfs/root/root/

# 默认目标
all: $(TARGET)

# 编译目标文件
$(TARGET): $(SOURCE)
	$(CROSS_COMPILE)gcc $(SOURCE) -o $(TARGET)

# 将目标文件复制到指定的 NFS 目录
install: $(TARGET)
	cp $(TARGET) $(NFS_PATH)

# 清理生成的文件
clean:
	rm -f $(TARGET)

# 默认执行的目标
.PHONY: all install clean