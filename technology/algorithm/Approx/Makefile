ROOT=..
PLATFORM=$(shell $(ROOT)/systype.sh)
include $(ROOT)/Make.defines.$(PLATFORM)

target=Approximation DynamicPro Random


all:$(target)

Approximation : Approximation.o
	$(CC) $^ -o $@ $(LDFALGS)
	echo "近似算法"

DynamicPro : DynamicPro.o
	$(CC) $^ -o $@ $(LDFALGS)
	echo "动态规划"

Random : Random.o
	$(CC) $^ -o $@ $(LDFALGS)
	echo "生成数据集"



%.o : %.c
	$(CC) -c $^ -o $@  $(CFLAGS) $(DEFINES)


clean :
	rm *.o
	rm $(target)
