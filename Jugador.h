#ifndef JUGADOR_H
#define JUGADOR_H

#include "Item.h"

#include<string>
using namespace std;

class Jugador:public Item{
	private:
		string nombre;
		bool estado;
		bool tipo_control;
		int lives;
	public:
		Jugador(string,bool,bool,int);
		string getNombre();
		bool getEstado();
		bool getTipo_Control();
		int getLives();
		void setLives(int);
		void setEstado(bool);
		virtual char getMarca();
};


#endif