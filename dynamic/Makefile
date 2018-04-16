CC=gcc
CFLAGS=-Wall -std=c99
GCOV=--coverage

# ---- GCOV TOOLS ----
# --coverage : This option is used to compile and link code instrumented for
#								coverage analysis. The option is a synonym for `-fprofile-arcs'
#								`-ftest-coverage' (when compiling) and `-lgcov' (when linking).
# -fprofile-arcs :
# -ftest-coverage :
# -lgcov :
# .gcda :
# .gcno :
# .gcov :

# ---- DYNAMIC TOOLS ----
# -fpic :
# -shared : cria um objeto compartilhado (e.g. libtestlib.so)

# ---- GCC TOOLS ----
# -c :
# -o :
# -L :
# -l :
# -Wall :
# -std=c99 :

all : clean build exec

build:
	$(CC) $(CFLAGS) -fpic -c src/testlib.c -o lib/testlib.o $(GCOV)
	$(CC) -shared lib/testlib.o -o lib/libtestlib.so -lgcov
	$(CC) $(CFLAGS) src/test.c -o bin/test -Llib -ltestlib $(GCOV)

exec:
		LD_LIBRARY_PATH=lib bin/test
		gcov testlib -o lib
		gcov test

clean:
	rm -f *.gcov *.gcda *.gcno
	rm -rf bin lib; mkdir bin lib
