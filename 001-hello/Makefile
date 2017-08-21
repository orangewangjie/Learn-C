#VPATH = src:compile:bin
#vpath %.c src
#vpath %.o compile

hello : hello.o
	cc -o hello hello.o

hello.o : hello.c
	cc -c -o hello.o hello.c


run : 
	./hello
clean:
	rm -rf hello hello.o 



