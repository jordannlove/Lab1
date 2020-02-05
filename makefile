Lab1: main.o Exec.o LinkedList.o Node.o
	g++ -std=c++11 main.o Exec.o LinkedList.o Node.o -o Lab1

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Exec.o: Exec.cpp Exec.h
	g++ -std=c++11 -c Exec.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -std=c++11 -c LinkedList.cpp

Node.o: Node.cpp Node.h
	g++ -std=c++11 -c Node.cpp

clean:
	rm -f Lab1 *.o
