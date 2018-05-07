#ifndef CUERPO_H
#define CUERPO_H

#include "Cilindro.h"
class Cuerpo
{
	public:
		Cuerpo();
		void saludar();		
	private:
		Cilindro* cilindro;
};

#endif
