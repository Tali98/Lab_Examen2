#include "bombas.h"
#include "Jugador.h"
#include "Normal.h"
#include "V.h"
#include "Espina.h"
#include "Item.h"
#include "Obstaculo.h"


#include<string>
#include<iostream>
#include<vector>
using namespace std;

//crear matrix
Item*** crearMatriz();
//print Tablero()
void printTablero(Item***);
//delete
void deleteMatrix(Item***);
//movement player
Item*** Movement(int,int,int,int,Item***);



int posicion_x=0;
int posicion_y=0;

//globabl
vector<bombas*>lista;

int main(){
	Item*** Tablero = crearMatriz();
	cout<<"HELLLOOOO bienvenido a Bomberman 5 (Worms es mejor juego)"<<endl;
	cout<<"SU nombre sera Panchito porque no me dio tiempo de hacerlo con respuesta de usuario"<<endl;
	bool alive = true;
	cout<<"AVISOOO:: Esta en alfa stage este juego todavia; solo el player se mueve y pone bombas pero no estallan las bombas; y debido a que todos quedan vivos nunca se sale del while soo meta el comando ctrl c para salir; gracias por su comprension"<<endl;
	while(alive == true){
	cout<<"El tablero se encuentra en este estado ahorita:: "<<endl;
	printTablero(Tablero);
	string movement;
	cout<<"Como desea moverse: w(arriba) s(abajo) d(derecha) a(izquierda) p(BOMBA)"<<endl;
	cin>>movement;
	int old_x = posicion_x;
	int old_y = posicion_y;
	for(int i = 0 ; i < movement.size() ; i++){
		if(movement[i] == 'w' || movement[i] == 'W'){
			if(posicion_y - 1 < 0){

			}else{
				posicion_y--;
			}
		}
		if(movement[i] == 's' || movement[i] == 'S'){
		
			if(posicion_y + 1 > 10 ){
	
			}else{
	
				posicion_y++;
			}
		}
		if(movement[i] == 'd' || movement[i] == 'D'){
			if(posicion_x + 1 > 12 ){

			}else{
				posicion_x++;
			}
		}
		if(movement[i] == 'a' || movement[i] == 'A'){
			if(posicion_x - 1 < 0 ){

			}else{
				posicion_x--;
			}
		}
		if(movement[i]=='p' || movement[i] == 'P'){
			Tablero[posicion_y][posicion_x] = new Normal(4,3);
		}
	}
	Tablero = Movement(old_y,old_x,posicion_y,posicion_x,Tablero);
}

	deleteMatrix(Tablero);

	
	return 0;
}


Item*** crearMatriz(){
	Item*** Tablero = new Item**[11];
	for(int i = 0 ; i < 11 ; i++){
		Tablero[i] = new Item*[13];
	}
	for(int i = 1 ; i < 10 ; i++){
		for(int c = 1 ; c < 12 ; c++){
			if(c%2!=0 && i%2!=0){
				Tablero[i][c] = new Obstaculo();
			}else{
				Tablero[i][c] = NULL;
			}
		}
		cout<<endl;
	}
	Tablero[0][0] = new Jugador("Victor",true,true,3);
	Tablero[10][0] = new Jugador("BOT1",true,false,3);
	Tablero[0][12] = new Jugador("BOT2",true,false,3);
	Tablero[10][12] = new Jugador("BOT3",true,false,3);
	return Tablero;
}

void printTablero(Item*** Tablero){
	for(int i = 0 ; i < 11 ; i++){
		for(int c = 0 ; c < 13 ; c++){
			Obstaculo* obstaculo = dynamic_cast<Obstaculo*>(Tablero[i][c]);
			Jugador* jugador = dynamic_cast<Jugador*>(Tablero[i][c]);
			bombas* bomba = dynamic_cast<bombas*>(Tablero[i][c]);
			if(obstaculo!=NULL){
				cout<<"["<<obstaculo->getMarca()<<"] ";
			}
			else if(jugador!=NULL){
				cout<<"["<<jugador->getMarca()<<"] ";
			}
			else if(bomba!=NULL){
				cout<<"["<<bomba->getMarca()<<"] ";			
			}else{
				cout<<"[ "<<"] ";
			}

		}
		cout<<endl;
	}
}

void deleteMatrix(Item*** Tablero){
	for(int i = 0 ; i < 11 ; i++){
		for(int c = 0 ; c < 13 ; c++){
			if(Tablero[i][c]!=NULL){
				delete Tablero[i][c];
				Tablero[i][c]=NULL;
			}
		}
		delete Tablero[i];
	}
	delete[] Tablero;
}

Item*** Movement(int old_y2,int old_x2,int posicion_y2,int posicion_x2,Item*** Tablero){

	if(Tablero[posicion_y2][posicion_x2] !=NULL){
	
		posicion_x = old_x2;
		posicion_y = old_y2;
	}
	else{
		Jugador* player = dynamic_cast<Jugador*>(Tablero[old_y2][old_x2]);
		Tablero[posicion_y2][posicion_x2] = player;
		Tablero[old_y2][old_x2] = NULL;

	}

	return Tablero;
}