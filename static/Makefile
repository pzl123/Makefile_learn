DIR = $(shell pwd)



#CFLAG即compile flag，表示在编译时所加入的选项参数
#参数包括  
#-Wall  : 编译后显示所有警告信息
#-g     : 编译时加入调试信息，以便之后可以用gdb调试
#-fPIC  : 编译动态链接库时加入的选项
#-I./inc: -I选项指定从哪个目录寻找头文件，在这指定之后，在源文件中包含头文件就可以使用<>，这里./inc即为指定的目录
CFLAG= -I $(DIR)


#LFLAG即library flag，表示链接生成可执行程序时所要链接的所有库的选项参数
#-L./lib : -L指示动态/静态链接库所在的目录，这里./lib即所在的目录
#-l      : -l指示动态/静态链接库的名字，注意: 这里的库名字并不包括前缀(lib)和后缀(.a或.so)
#$(SHARE) : 取SHARE变量对应的动态链接库链接选项--share
LFLAG=



#静态库名以lib为前缀，.a为后缀
BIN=./libshow.a
# all:
# 	@echo $(CFLAG)
CC=gcc -o
AR=ar -r

#编译静态库用ar -cr命令
CO=$(AR)
#wildcard函数 明确表示通配符，表示当前路径下所有的匹配文件
SRC=$(wildcard $(DIR)/*.c)
#返回被替换过后的字符串。
OBJ=$(patsubst %.c,%.o,$(SRC))

#all目标依赖于$(BIN)目标，表示在构建静态库之前先构建目标文件。
all:$(BIN)
#$(BIN)目标依赖于$(OBJ)目标和$(LFLAG)变量。
#它使用$(CO)命令将目标文件打包成静态库。
$(BIN):$(OBJ)
	$(CO) $@ $^ $(LFLAG)
#$(DIR)/%.o规则定义了如何生成目标文件。
#它使用$(CC)命令将源文件编译为目标文件，并使用$(CFLAG)作为编译选项。

$(DIR)/%.o:$(DIR)/%.c
	$(CC) $@ -c $< $(CFLAG)


# show:$(BIN)
# 	gcc -c  show.c $(CFLAG)  
# 	ar -r libshow.a show.o
# 	cp libshow.a ../lib
# 	# cp show_s.h ../inc
#	rm -f show.o
#	rm -f libshow.a

.PHONY:clean
clean:
	rm $(OBJ) $(BIN)

# clean:
# 	rm -f  %.o %.a show ../inc/%.al