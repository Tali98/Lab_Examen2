#ifndef NORMAL_H
#define NORMAL_H

#include "bombas.h"

class Normal:public bombas{
	private:
		int time;
		int alcance;
		bool visible;
	public:
		Normal(int,int);
		virtual int getTime();
		int getAlcance();
		virtual char getMarca();
		virtual bool getVisible();
		virtual bool setVisible(bool);

};

#endif