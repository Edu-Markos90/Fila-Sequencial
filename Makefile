
all: main

main: main.o fila.o
	$(CC) -o main main.o fila.o

main.o: main.c fila.h
	$(CC) -c main.c

fila.o: fila.c fila.h
	$(CC) -c fila.c

clean:
	rm -f *.o main
