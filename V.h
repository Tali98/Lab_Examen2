#ifndef V_H
#define V_H

#include "bombas.h"

class V:public bombas{
	private:
		int time;
		int alcance;
	public:
		V(int,int);
		virtual int getTime();
		int getAlcance();
		virtual char getMarca();
};

#endif