CC=g++
CFLAGS=-I.

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

day2: day2.o
	$(CC) -o day2.out day2.o