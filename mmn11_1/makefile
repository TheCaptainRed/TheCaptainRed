prog: main.o deletus.o
	gcc -ansi -Wall -g -pedantic main.o deletus.o -o prog
main.o: main.c header.h deletus.c
	gcc -ansi -Wall -c -pedantic main.c -o main.o
deletus.o: deletus.c header.h
	gcc -ansi -Wall -c -pedantic deletus.c -o deletus.o                                            