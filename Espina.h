#ifndef ESPINA_H
#define ESPINA_H

#include "bombas.h"

class Espina:public bombas{
	private:
		int time;
		int alcance;
		int num;
	public:
		Espina(int,int,int);
		virtual int getTime();
		int getAlcance();
		int getNum();
		void setNum(int);
		virtual char getMarca();
};

#endif