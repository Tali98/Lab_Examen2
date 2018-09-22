#ifndef BOMBAS_H
#define BOMBAS_H

#include "Item.h"

class bombas:public Item{
	public:
		virtual int getTime()=0;
		virtual bool getVisible()=0;
		virtual bool setVisible(bool)=0;
		virtual char getMarca()=0;
};

#endif