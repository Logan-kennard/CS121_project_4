#include <iostream>
#include <horse.h>
#include <race.h>
#include <random>

std::random_device rd;
std::uniform_int_distrabution<int> dist(0,1);

horse::Horse(){
	Horse::position= 0;
	Horse::id=0;
	Horse::trackLength=15;
}
void horse::init(int id, int trackLength){
	Horse::position=0;
	Horse::id=id;
	Horse::trackLenght=trackLength;
}
void horse::advance(){
	int coin= dist(rd)
	Horse::position = coin
}
void horse::printLane(){
	for(int position < trackLength)
	else(){std::cont<<"."
	}
bool horse::isWinner(){


