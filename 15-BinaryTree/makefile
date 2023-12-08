all: main.exe clean run

main.exe: main.o
	g++ main.o -o main.exe -g

main.o: main.cpp
	g++ -c main.cpp -o main.o -g
	
clean:
	rm -rf *.o

run: main.exe
	./main.exe