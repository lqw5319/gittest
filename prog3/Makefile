# HEADERS = program.h headers.h

default: prog3

# program.o: program.c $(HEADERS)
#     gcc -c program.c -o program.o

prog3: prog3.c check.o
	gcc -g -std=c99  prog3.c check.o -o prog3 -lm

check.o: check.c
	gcc -c -std=c99  check.c -o check.o -lm

clean:
	-rm -f prog3
