.phony: all clean

all: ex4.01.log ex4.02.log ex4.03.log ex4.04.log ex4.05.log ex4.06.log ex4.07.log ex4.08.log ex4.09.log ex4.10.log ex4.11.log ex4.12.log ex4.13.log ex4.14.log

ex4.01.log: ex4.01.c ex4.01.getline2.c ex4.01.strrindex.c ex4.01.input
	@echo "Completing Exercise 4.1."
	-$(CC) -ansi -c ex4.01.getline2.c
	-$(CC) -ansi -c ex4.01.strrindex.c
	-$(CC) -ansi -c ex4.01.c
	-$(CC)  ex4.01.o ex4.01.getline2.o ex4.01.strrindex.o -o ex4.01.out
	-./ex4.01.out < ex4.01.input > ex4.01.log

ex4.02.log: ex4.02.c ex4.02.atof.c
	@echo "Completing Exercise 4.2."
	-$(CC) -ansi -c ex4.02.atof.c
	-$(CC) -ansi -c ex4.02.c
	-$(CC) ex4.02.o ex4.02.atof.o -o ex4.02.out
	-./ex4.02.out > ex4.02.log

ex4.03.log: ex4.03.c ex4.03.stack.c ex4.03.ch.c ex4.03.getop.c
	@echo "Completing Exercise 4.3."
	-$(CC) -ansi ex4.03.c ex4.03.stack.c ex4.03.ch.c ex4.03.getop.c -o ex4.03.out
	echo "15 6 %" | ./ex4.03.out > ex4.03.log
	echo "46.7 -.3 +" | ./ex4.03.out >> ex4.03.log

ex4.04.log: ex4.04.c ex4.04.stack.c ex4.03.ch.c ex4.03.getop.c
	@echo "Completing Exercise 4.4."
	-$(CC) -ansi ex4.04.c ex4.04.stack.c ex4.03.ch.c ex4.03.getop.c -o ex4.04.out
	echo "15 6 % =" | ./ex4.04.out > ex4.04.log
	echo "45.7 -.3 + =" | ./ex4.04.out >> ex4.04.log
	echo "98 57 ? "|./ex4.04.out >> ex4.04.log
	echo "98 57 $ ?" | ./ex4.04.out >> ex4.04.log
	echo "98 54 $ ? < ?" | ./ex4.04.out >> ex4.04.log

ex4.05.log: ex4.05.c ex4.04.stack.c ex4.03.ch.c ex4.03.getop.c
	@echo "Completing Exercise 4.5."
	-$(CC) -ansi ex4.05.c ex4.04.stack.c ex4.03.ch.c ex4.03.getop.c -o ex4.05.out
	echo "3.1415 4 / S ?" | ./ex4.05.out > ex4.05.log
	echo "3.1415 4 / C ?" | ./ex4.05.out >> ex4.05.log
	echo "3.1415 4 / T ?" | ./ex4.05.out >> ex4.05.log
	echo "1 E ?" | ./ex4.05.out >> ex4.05.log
	echo "1 L ?" | ./ex4.05.out >> ex4.05.log
	echo "2 R ?" | ./ex4.05.out >> ex4.05.log
	echo "2 0.5 P ?" | ./ex4.05.out >> ex4.05.log

ex4.06.log: ex4.06.c ex4.06.variables.c ex4.04.stack.c ex4.03.ch.c ex4.06.getop.c
	@echo "Completing Exercise 4.6."
	-$(CC) -ansi ex4.06.c ex4.06.variables.c ex4.04.stack.c ex4.03.ch.c ex4.06.getop.c -o ex4.06.out
	printf "44 33 - > a\n a=\n" | ./ex4.06.out > ex4.06.log
	printf "44 ? \n \`=\n" | ./ex4.06.out >> ex4.06.log
	printf "55 62 - > a\n a 22 + \n ? \n" | ./ex4.06.out >> ex4.06.log

ex4.07.log: ex4.07.c ex4.07.ch.c
	@echo "Completing Exercise 4.7."
	-$(CC) -ansi ex4.07.c ex4.07.ch.c -o ex4.07.out
	echo "123-4567-890" | ./ex4.07.out > ex4.07.log

ex4.08.log: ex4.03.c ex4.03.stack.c ex4.08.ch.c ex4.03.getop.c
	@echo "Completing Exercise 4.3."
	-$(CC) -ansi ex4.03.c ex4.03.stack.c ex4.08.ch.c ex4.03.getop.c -o ex4.08.out
	echo "15 6 %" | ./ex4.08.out > ex4.08.log
	echo "46.7 -.3 +" | ./ex4.08.out >> ex4.08.log

ex4.09.log: ex4.03.c ex4.03.stack.c ex4.09.ch.c ex4.09.getop.c
	@echo "Completing Exercise 4.9."
	-$(CC) -ansi ex4.03.c ex4.03.stack.c ex4.09.ch.c ex4.09.getop.c -o ex4.09.out
	echo "15 6 %" | ./ex4.09.out > ex4.09.log
	echo "46.7 -.3 +" | ./ex4.09.out >> ex4.09.log

ex4.10.log: ex4.03.c ex4.03.stack.c ex4.10.getop.c
	@echo "Completing Exercise 4.10."
	-$(CC) -ansi ex4.03.c ex4.03.stack.c ex4.10.getop.c -o ex4.10.out
	echo "15 6 %" | ./ex4.10.out > ex4.10.log
	echo "46.7 -.3 +" | ./ex4.10.out >> ex4.10.log

ex4.11.log: ex4.03.c ex4.03.stack.c ex4.11.getop.c
	@echo "Completing Exercise 4.11."
	-$(CC) -ansi ex4.03.c ex4.03.stack.c ex4.11.getop.c -o ex4.11.out
	echo "15 6 %" | ./ex4.11.out > ex4.11.log
	echo "46.7 -.3 +" | ./ex4.11.out >> ex4.11.log

ex4.12.log: ex4.12.c
	@echo "Completing Exercise 4.12."
	-$(CC) -ansi ex4.12.c -o ex4.12.out
	./ex4.12.out > ex4.12.log

ex4.13.log: ex4.13.c
	@echo "Completing Exercise 4.13."
	-$(CC) -ansi ex4.13.c -o ex4.13.out
	./ex4.13.out > ex4.13.log

ex4.14.log: ex4.14.c
	@echo "Completing Exercise 4.14."
	-$(CC) -ansi ex4.14.c -o ex4.14.out
	./ex4.14.out > ex4.14.log

clean:
	-rm *.log
	-rm *.out
	-rm *.o
