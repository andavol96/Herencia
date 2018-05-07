#include "Cuerpo.h"

Cuerpo::Cuerpo()
{
	this->cilindro = new Cilindro();
}

void Cuerpo::saludar()
{
	cout << "hola soy un Cuerpo";
	cout << endl << "saludo con mi primitiva" << endl;
	this->cilindro->saludar();
}
