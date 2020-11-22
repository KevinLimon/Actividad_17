#include "civilizacion.h"

Civilizacion::Civilizacion()
{

}

Civilizacion::Civilizacion(const string &nombre, float ubx, float uby, int punt)
{
    this->nombre = nombre;
    this->ubx = ubx;
    this->uby = uby;
    this->punt = punt;
}

void Civilizacion::setNombre(const string &v)
{
    nombre = v;
}

string Civilizacion::getNombre()
{
    return nombre;
}

void Civilizacion::setUbx(float v)
{
    ubx = v;
}

float Civilizacion::getUbx()
{
    return ubx;
}

void Civilizacion::setUby(float v)
{
    uby = v;
}

float Civilizacion::getUby()
{
    return uby;
}

void Civilizacion::setPunt(int v)
{
    punt = v;
}

int Civilizacion::getPunt()
{
    return punt;
}