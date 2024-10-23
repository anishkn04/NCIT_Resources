CC=clang
CFLAGS=-Wall -g 

all: mainapp

mainapp: main.o tools.o
	$(CC)  main.o tools.o 


main.o: main.c 
	$(CC)  -c main.c 

tools.o: tools.c 
	$(CC)  -c tools.c 

clean:
	rm a.out *.o mainapp 



