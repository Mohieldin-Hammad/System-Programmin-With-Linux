liblol.so: rand.o fact.o fib1.o
	gcc -shared rand.o fact.o fib1.o -o liblol.so
rand.o: rand.c
	gcc -c -fPIC rand.c
fact.o: fact.c
	gcc -c -fPIC fact.c
fib1.o: fib1.c
	gcc -c -fPIC fib1.c

