game: main.o horse.o race.o
	g++ main.o horse.o race.o -o game
main.o: main.cpp horse.h race.h 
	g++ -c main.cpp
horse.o: horse.cpp horse.h 
	g++ -c horse.cpp
race.0: race.cpp race.h
	g++ -c race.cpp
run: game 
	./game
