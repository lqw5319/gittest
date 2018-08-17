# HEADERS = program.h headers.h

default: prog2

# program.o: program.c $(HEADERS)
#     gcc -c program.c -o program.o

prog2: prog2.c
	gcc -g -std=c99  prog2.c -o prog2 -lm

clean:
	-rm -f prog2
