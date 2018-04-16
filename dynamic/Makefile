CC=gcc
CFLAGS=-Wall -std=c99
GCOV=--coverage
# --covertage = -fprofile-arcs -ftest-coverage

all : clean build exec

build:
	$(CC) $(CFLAGS) -fpic -c src/testlib.c -o lib/testlib.o
	$(CC) -shared lib/testlib.o -o lib/libtestlib.so
	$(CC) $(CFLAGS) $(GCOV) src/test.c -o bin/test -Llib -ltestlib

exec:
		LD_LIBRARY_PATH=lib bin/test
		gcov test

clean:
	rm -f *.gcov *.gcda *.gcno
	rm -rf bin lib; mkdir bin lib
