DIR = $(shell pwd)

CFLAG= -I $(DIR)
#静态库名以lib为前缀，.a为后缀
BIN=../lib/libshow.a
# all:
# 	@echo $(CFLAG)
CC=gcc -o
AR=ar -r

#编译静态库用ar -cr命令
CO=$(AR)
SRC=$(wildcard $(DIR)/*.c)
OBJ=$(patsubst %.c,%.o,$(SRC))

#all目标依赖于$(BIN)目标，表示在构建静态库之前先构建目标文件。
all:$(BIN)
#$(BIN)目标依赖于$(OBJ)目标和$(LFLAG)变量。
#它使用$(CO)命令将目标文件打包成静态库。
$(BIN):$(OBJ)
	$(CO) $@ $^ $(LFLAG)
#	rm -r libshow.a
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