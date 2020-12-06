#include"aldeano.h"

void Aldeano::setNombre(const string &v)
{
    nombre = v;
}

string Aldeano::getNombre() const
{
    return nombre;
}

void Aldeano::setEdad(int v)
{
    edad = v;
}

int Aldeano::getEdad() const
{
    return edad;
}

void Aldeano::setGenero(const string &v)
{
    genero = v;
}

string Aldeano::getGenero()
{
    return genero;
}

void Aldeano::setSalud(float v)
{
    salud = v;
}

float Aldeano::getSalud() const
{
    return salud;
}


