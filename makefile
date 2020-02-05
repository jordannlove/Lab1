Lab1: main.o Exec.o
	g++ -std=c++11 main.o Exec.o -o Lab1

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Exec.o: Exec.cpp Exec.h
	g++ -std=c++11 -c Exec.cpp

clean:
	rm -f Lab1 *.o
