CC = g++
EXEC: Football_Manager

all: $ {EXEC}

$ {EXEC} : Main.o Classes.o

	${CC} Main.o Classes.o -o Football_Manager

Main.o : main.cpp Classes.h
	${CC} -c main.cpp -o Main.o

Classes.o : Classes.cpp
	${CC} -c Classes.cpp -o Classes.o

clean: 
	rm -rf *.o

