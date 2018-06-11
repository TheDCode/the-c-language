all:	swapnumbers

swapnumbers:	swapnumbers.o
	gcc swapnumbers.o -o swapnumbers

swapnumbers.o:	swapnumbers.c
	gcc -c swapnumbers.c -o swapnumbers.o

clean:
	rm -f swapnumbers swapnumbers.o core *~
