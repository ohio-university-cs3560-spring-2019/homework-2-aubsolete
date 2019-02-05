bin/proj1: main.o proj1.o
	g++ -o proj1 main.o proj1.o

main.o: main.cc proj1.h
	g++ -c main.cc

proj1.a: proj1.o
	ar rcv proj1.a proj1.o

proj1.o: proj1.cc proj1.h
	g++ -c proj1.cc
