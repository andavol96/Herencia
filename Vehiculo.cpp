#include "Vehiculo.h"
#include <string.h>

Vehiculo::Vehiculo(char *_placa)
{
	strcpy(this->placa, "");
}

Vehiculo::Vehiculo(char *_placa)
{
	strcpy(this->placa, _placa);
}

void Vehiculo::setPlaca(char *_placa)
{
	strcpy(this->placa, _placa);
}

void Vehiculo::getPlaca(char *_placa)
{
	strcpy(this->placa, _placa);
}

Vehiculo::Vehiculo(char *_dias)
{
	strcpy(this->dias, "");
}

Vehiculo::Vehiculo(char *_dias)
{
	strcpy(this->dias, _dias);
}

void Vehiculo::setDias(char *_dias)
{
	strcpy(this->dias, _dias);
}

void Vehiculo::getDias(char *_dias)
{
	strcpy(this->dias, _dias);
}
