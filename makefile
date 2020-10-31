all: main.o nodes.o
	gcc -o program main.o nodes.o
main.o: main.c nodes.h
	gcc -c main.c 
nodes.o: nodes.c nodes.h
	gcc -c nodes.c
run:
	./program
clean:
	-rm *.o