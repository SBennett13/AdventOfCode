CC=g++
CFLAGS=-I.

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

day1: day1.o
	$(CC) -o day1.out day1.o