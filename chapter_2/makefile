.phony: all, clean

all: ex2.1.log ex2.2.log ex2.3.log ex2.4.log ex2.5.log ex2.6.log ex2.7.log ex2.8.log ex2.9.log ex2.10.log

ex2.1.log: ex2.1.c
	-$(CC) -ansi ex2.1.c -o ex2.1.out
	-./ex2.1.out > ex2.1.log

ex2.2.log: ex2.2.c
	-$(CC) -ansi ex2.2.c -o ex2.2.out
	-echo "My name is Clark."| ./ex2.2.out > ex2.2.log

ex2.3.log: ex2.3.c
	-$(CC) -ansi ex2.3.c -o ex2.3.out
	-./ex2.3.out > ex2.3.log

ex2.4.log: ex2.4.c
	-$(CC) -ansi ex2.4.c -o ex2.4.out
	-./ex2.4.out > ex2.4.log

ex2.5.log: ex2.5.c
	-$(CC) -ansi ex2.5.c -o ex2.5.out
	-./ex2.5.out > ex2.5.log

ex2.6.log: ex2.6.c
	-$(CC) -ansi ex2.6.c -o ex2.6.out
	-./ex2.6.out > ex2.6.log

ex2.7.log: ex2.7.c
	-$(CC) -ansi ex2.7.c -o ex2.7.out
	-./ex2.7.out > ex2.7.log

ex2.8.log: ex2.8.c
	-$(CC) -ansi ex2.8.c -o ex2.8.out
	-./ex2.8.out > ex2.8.log

ex2.9.log: ex2.9.c
	-$(CC) -ansi ex2.9.c -o ex2.9.out
	-./ex2.9.out > ex2.9.log

ex2.10.log: ex2.10.c
	-$(CC) -ansi ex2.10.c -o ex2.10.out
	-./ex2.10.out > ex2.10.log

clean:
	-rm *.log
	-rm *.out
