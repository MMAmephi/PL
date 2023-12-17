all: main.exe run

main.exe: main.o Fraction.o
	g++ main.o Fraction.o -o main.exe

main.o: main.cpp
	g++ -c main.cpp -o main.o

LinkedList.o: Fraction.cpp
	g++ -c Fraction.cpp -o Fraction.o

run: main.exe
	./main.exe