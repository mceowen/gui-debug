INCLUDE = -I../../../mikipilot/
# INCLUDE += -IC:/boost/boost_1_71_0/ # download boost library zip and unzip to here https://www.boost.org/doc/libs/1_71_0/more/getting_started/windows.html

OBJS  = ../../../mikipilot/build/gcs/executable/objects/utilities/globals.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/utilities/ifile.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/utilities/object.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/utilities/ofile.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/utilities/timer.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/utilities/tob.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/network/deserializable.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/network/packet.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/network/parameter.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/network/serializable.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/network/state.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/network/timestamped.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/gnc/dcm.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/gnc/globals.o
OBJS += ../../../mikipilot/build/gcs/executable/objects/gnc/quat.o

LIBS += -L../../../mikipilot/build/gcs/executable/release -l:lib_utilities.a
LIBS += -L../../../mikipilot/build/gcs/executable/release -l:lib_autogen_bus.a
LIBS += -L../../../mikipilot/build/gcs/executable/release -l:lib_autogen_packet.a
LIBS += -L../../../mikipilot/build/gcs/executable/release -l:lib_autogen_parameter.a
LIBS += -L../../../mikipilot/build/gcs/executable/release -l:lib_autogen_state.a
LIBS += -L../../../mikipilot/build/gcs/executable/release -l:lib_gnc.a
LIBS += -L../../../mikipilot/build/gcs/executable/release -l:lib_network.a
LIBS += -L../../../mikipilot/build/gcs/executable/release -l:lib_autogen_globals.a
LIBS += -L../../../mikipilot/build/gcs/executable/release -l:lib_autogen_timestamped.a

default: main

main: libbenlib.a main.cpp
	gcc -O0 $(INCLUDE) $(LIBS) -L. -lbenlib -lstdc++ main.cpp -o main $(OBJS)

BenLib.o: BenLib.cpp
	gcc -O0 $(INCLUDE) $(LIBS) -lstdc++ -c BenLib.cpp

libbenlib.a: BenLib.o
	ar rcs libbenlib.a BenLib.o

standalone: standalone.cpp
	g++ -O0 $(INCLUDE) $(LIBS) standalone.cpp -o standalone $(OBJS)

clean: 
	rm -f BenLib.o libbenlib.a main
	rm -f standalone.exe
