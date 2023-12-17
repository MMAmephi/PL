all: main.exe run

main.exe: main.o Rectangle.o
	g++ main.o Rectangle.o -o main.exe

main.o: main.cpp
	g++ -c main.cpp -o main.o

Rectangle.o: Rectangle.cpp
	g++ -c Rectangle.cpp -o Rectangle.o

run: main.exe
	./main.exe