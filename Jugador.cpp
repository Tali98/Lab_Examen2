#include "Jugador.h"

Jugador::Jugador(string pNombre , bool pEstado , bool pTipo_Control, int pLives){
	nombre = pNombre;
	estado = pEstado;
	tipo_control = pTipo_Control;
	lives = pLives;
}

string Jugador::getNombre(){
	return nombre;
}

bool Jugador::getEstado(){
	return estado;
}

bool Jugador::getTipo_Control(){
	return tipo_control;
}

int Jugador::getLives(){
	return lives;
}

void Jugador::setLives(int pLives){
	lives = pLives;
}

void Jugador::setEstado(bool pEstado){
	estado = pEstado;
}

char Jugador::getMarca(){
	if(this->getTipo_Control() == true){
		return 'H';
	}
	else{
		return 'P';
	}
}