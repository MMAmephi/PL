all: main.exe run

main.exe: main.o Queue.o Stack.o
	g++ main.o Queue.o Stack.o -o main.exe

main.o: main.cpp
	g++ -c main.cpp -o main.o

Queue.o: Queue.cpp
	g++ -c Queue.cpp -o Queue.o

Stack.o: Stack.cpp
	g++ -c Stack.cpp -o Stack.o

run: main.exe
	./main.exe