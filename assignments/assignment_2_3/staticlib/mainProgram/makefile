all: myexe

myexe: main.o lol
	gcc main.o -o myexe -llol -L../
main.o: main.c ../myheader.h
	gcc -c main.c -I../

lol:
	$(MAKE) -C ..

include: ../makefile

clean:
	rm -f main.o
	rm -f ../*.o
	rm -f ../liblol.a
	rm -f myexe
