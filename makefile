FLAGS = -Wall -g
CC = gcc
AR = ar

all: connections

connections: main.o my_mat.a
	$(CC) $(FLAGS) -o connections main.o my_mat.a

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.o

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

my_mat.a: my_mat.o
	$(AR) -rcs my_mat.a my_mat.o


clean:
	rm -f *.o *.a connections