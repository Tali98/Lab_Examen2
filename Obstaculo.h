#ifndef OBSTACULO_H
#define OBSTACULO_H

#include "Item.h"

class Obstaculo:public Item{
	public:
		Obstaculo();
		virtual char getMarca();
};

#endif