#include "V.h"

V::V(int pTime , int pAlcance){
	time = pTime;
	alcance = pAlcance;
}

int V::getTime(){
	return time;
}

int V::getAlcance(){
	return alcance;
}

char V::getMarca(){
	return 'B';
}