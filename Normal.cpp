#include "Normal.h"

Normal::Normal(int pTime , int pAlcance){
	time = pTime;
	alcance = pAlcance;
}

int Normal::getTime(){
	return time;
}

int Normal::getAlcance(){
	return alcance;
}

char Normal::getMarca(){
	return 'B';
}

bool Normal::getVisible(){
	return visible;
}

bool Normal::setVisible(bool pVisible){
	visible = pVisible;
}