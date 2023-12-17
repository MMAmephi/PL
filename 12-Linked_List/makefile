all: main.exe run

main.exe: main.o LinkedList.0 Node.o
	g++ main.o LinkedList.0 Node.o -o main.exe

main.o: main.cpp
	g++ -c main.cpp -o main.o

LinkedList.o: LinkedLIst.cpp
	g++ -c LinkedList.cpp -o LinkedList.o

Node.o: Node.cpp
	g++ -c Node.cpp -o Node.o

run: main.exe
	./main.exe