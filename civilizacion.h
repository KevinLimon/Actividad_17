#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include<iostream>
#include<iomanip>
#include"aldeano.h"
#include <list>
using namespace std;

class Civilizacion
{
private:
    string nombre;
    float ubx;
    float uby;
    int punt;
    list<Aldeano> aldeanos;
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
    void agregarInicio(const Aldeano &a);
    void agregarFinal(const Aldeano &a);
    void print();
    void eliminarNombre(const string &nombre);
    void eliminarSalud(float s);
    void eliminarEdad();
    void clasificarNombre();
    void clasificarEdad();
    void clasificarSalud();
    
    friend ostream& operator<<(ostream &out, const Civilizacion &c)
    {
        out<<left;
        out << setw(13) << c.nombre;
        out << setw(20) << c.ubx;
        out << setw(20) << c.uby;
        out << setw(10) << c.punt;
        out<<endl;
        return out;
    }

    friend istream& operator>>(istream &in, Civilizacion &c)
    {
        cout<<"Nombre: ";
        getline(cin, c.nombre);
        cout<<"Ubicacion en x: ";
        cin>>c.ubx;
        cout<<"Ubicacion en y: ";
        cin>>c.uby;
        cout<<"Puntuacion: ";
        cin>>c.punt;
        return in;
    }

    bool operator==(const Civilizacion& c)
    {
        return nombre == c.nombre;
    }
    bool operator==(const Civilizacion& c) const
    {
        return nombre == c.nombre;
    }

    bool operator==(const string& c) const{
        return nombre == c;
    }
    bool operator==(const string& c){
        return nombre == c;
    }

    bool operator<(const Civilizacion& c)
    {
        return nombre < c.nombre;
    }
    bool operator<(const Civilizacion& c) const
    {
        return nombre < c.nombre;
    }

    bool operator>(const Civilizacion& c)
    {
        return nombre > c.nombre;
    }
    bool operator>(const Civilizacion& c) const
    {
        return ubx > c.ubx;
    }

};



#endif