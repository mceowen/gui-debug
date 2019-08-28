all: main

main: libbenlib.a
	gcc -O0 main.cpp -L. -lbenlib -lstdc++ -o main

BenLib.o:
	gcc -O0 -c BenLib.cpp

libbenlib.a: BenLib.o
	ar rcs libbenlib.a BenLib.o

clean: 
	rm -f BenLib.o libbenlib.a main

