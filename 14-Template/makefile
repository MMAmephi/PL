all: main.exe run

main.exe: main.o LinkedList.0 Node.o Queue.o Stack.o
	g++ main.o LinkedList.0 Node.o Queue.o Stack.o -o main.exe

main.o: main.cpp
	g++ -c main.cpp -o main.o

LinkedList.o: LinkedLIst.cpp
	g++ -c LinkedList.cpp -o LinkedList.o

Node.o: Node.cpp
	g++ -c Node.cpp -o Node.o

Queue.o: Queue.cpp
	g++ -c Queue.cpp -o Queue.o

Stack.o: Stack.cpp
	g++ -c Stack.cpp -o Stack.o

run: main.exe
	./main.exe