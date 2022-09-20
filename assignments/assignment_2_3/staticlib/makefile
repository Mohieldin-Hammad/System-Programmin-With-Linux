liblol.a: rand.o fact.o fib1.o
	ar -rs liblol.a rand.o fact.o fib1.o
rand.o: rand.c
	gcc -c -fPIC rand.c
fact.o: fact.c
	gcc -c -fPIC fact.c
fib1.o: fib1.c
	gcc -c -fPIC fib1.c

