main: main.o functions.h printhello.o factorial.o
	g++ -o main main.o printhello.o factorial.o
factorial.o: factorial.cpp
	g++ -c factorial.cpp
main.o: main.cpp
	g++ -c main.cpp
printhello.o: printhello.cpp
	g++ -c printhello.cpp
clean:
	rm main main.o printhello.o factorial.o
