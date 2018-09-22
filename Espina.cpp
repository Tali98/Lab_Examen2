#include "Espina.h"

Espina::Espina(int pTime , int pAlcance , int pNum){
	time = pTime;
	alcance = pAlcance;
	num = pNum;
}

int Espina::getTime(){
	return time;
}

int Espina::getAlcance(){
	return alcance;
}

int Espina::getNum(){
	return num;
}

void Espina::setNum(int pNum){
	num = pNum;
}

char Espina::getMarca(){
	return 'B';
}