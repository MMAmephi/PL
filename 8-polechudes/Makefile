all: main.exe run

main.exe: main.o Game.o Word.o Yakubovich.o
	g++ main.o Game.o Word.o Yakubovich.o -o main.exe

main.o: main.cpp
	g++ -c main.cpp -o main.o

Game.o: Game.cpp
	g++ -c Game.cpp -o Game.o

Word.o: Word.cpp
	g++ -c Word.cpp -o Word.o

Yakubovich.o: Yakubovich.cpp
	g++ -c Yakubovich.cpp -o Yakubovich.o

run: main.exe
	./main.exe