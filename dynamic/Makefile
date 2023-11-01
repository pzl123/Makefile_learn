DIR=./
#动态库名以lib为前缀，以.so为后缀
BIN=$(DIR)/libdynamicshow.so

SHARE=--share

#-Wall  : 编译后显示所有警告信息
#-g     : 编译时加入调试信息，以便之后可以用gdb调试
#-fPIC  : 编译动态链接库时加入的选项
#-I./inc: -I选项指定从哪个目录寻找头文件，在这指定之后，在源文件中包含头文件就可以使用<>，这里./inc即为指定的目录
CFLAG=-fPIC -I $(DIR)


#LFLAG即library flag，表示链接生成可执行程序时所要链接的所有库的选项参数
#-L./lib : -L指示动态/静态链接库所在的目录，这里./lib即所在的目录
#-l      : -l指示动态/静态链接库的名字，注意: 这里的库名字并不包括前缀(lib)和后缀(.a或.so)
#$(SHARE) : 取SHARE变量对应的动态链接库链接选项--share
LFLAG=$(SHARE)

CC=gcc -o

AR=ar -cr

#编译动态链接库用gcc -o命令
CO=$(CC)
#-------------------------以下为通用不变区域-----------------------

SRC=$(wildcard $(DIR)/*.c)
OBJ=$(patsubst %.c, %.o, $(SRC))

all:$(BIN)
$(BIN):$(OBJ)
	$(CO) $@ $^ $(LFLAG)

$(DIR)/%.o:$(DIR)/%.c
	$(CC) $@ -c $< $(CFLAG)

.PHONY:clean
clean:
	rm $(OBJ) $(BIN)
