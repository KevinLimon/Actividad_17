#ifndef ALDEANO_H
#define ALDEANO_H
#include <iostream>
using namespace std;

class Aldeano
{
private:
    string nombre;
    size_t edad;
    string genero;
    float salud;
public:
    Aldeano() {}
    Aldeano(const string &nombre, size_t edad, const string &genero, float salud): nombre(nombre), edad(edad), genero(genero), salud(salud) {}

    void setNombre(const string &v);
    string getNombre();

    void setEdad(size_t v);
    size_t getEdad();

    void setGenero(const string &v);
    string getGenero();

    void setSalud(float v);
    float getSalud();
};


#endif