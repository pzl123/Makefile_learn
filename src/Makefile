#为src目录，即工程源代码目录。在此目录下要通过链接动态链接库libdynamic_test.so和静态库libstatic_test.a 来生成可执行文件main
DIR=./
#在源码所在目录下生成可执行文件main
BIN=$(DIR)/main

SHARE=--share

#显示所有编译警告，并指示公共头文件(静态库和动态库的头文件)所在目录
CFLAG= -Wall -I ../inc
#在../lib目录中链接外部库文件 
#-L跟着的是库文件所在的目录名 
#-l库文件名，以库名为math的库为例，他的库文件名是libmath.so或者libmath.a（Linux下的库文件都要以lib开头，其中.so是动态库，.a是静态库）。可见，把库文件名的头lib和尾.so/.a去掉就是库名了。
LFLAG=-L ../lib  -lshow

CC=gcc -o

AR=ar -cr

#使用gcc -o 链接命令
CO=$(CC)
#SRC指的是指定目录下的所有.c文件名，OBJ指的是指定目录下的所有.o文件名
SRC=$(wildcard $(DIR)/*.c)
OBJ=$(patsubst %.c, %.o, $(SRC))

#链接命令
all:$(BIN)
$(BIN):$(OBJ)
	$(CO) $@ $^ $(LFLAG)

#编译命令
$(DIR)/%.o:$(DIR)/%.c
	$(CC) $@ -c $< $(CFLAG)


#清除无用文件
.PHONY:clean
clean:
	rm $(OBJ) $(BIN)
