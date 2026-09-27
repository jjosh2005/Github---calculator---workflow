CC = gcc
CFLAGS = -Wall -Isrc

all:
	$(CC) $(CFLAGS) src/calculator.c src/main.c -o calculator.exe

test:
	$(CC) $(CFLAGS) src/calculator.c tests/test_calculator.c -o test_runner.exe
	./test_runner.exe

clean:
	del calculator.exe test_runner.exe
