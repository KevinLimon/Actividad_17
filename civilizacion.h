#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include<iostream>
#include<iomanip>
using namespace std;

class Civilizacion
{
private:
    string nombre;
    float ubx;
    float uby;
    int punt;
public:
    Civilizacion();
    Civilizacion(const string &nombre, float ubx, float uby, int punt);
    void setNombre(const string &v);
    string getNombre();
    void setUbx(float v);
    float getUbx();
    void setUby(float v);
    float getUby();
    void setPunt(int v);
    int getPunt();
};



#endif