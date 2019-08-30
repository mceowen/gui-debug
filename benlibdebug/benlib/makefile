INCLUDE += -I../../../mikipilot/

LIBS += -L../../mikipilot/build/gcs/executable/release -l
LIBS = -L../../../mikipilot -l
# INCLUDE += -lboost

default: main

main: libbenlib.a main.cpp 
	gcc -O0 $(INCLUDE) main.cpp -L. -lbenlib -lstdc++ -o main

BenLib.o: BenLib.cpp BenLib.h
	gcc -O0 $(INCLUDE) -c BenLib.cpp

libbenlib.a: BenLib.o
	ar rcs libbenlib.a BenLib.o

clean: 
	rm -f BenLib.o libbenlib.a main
