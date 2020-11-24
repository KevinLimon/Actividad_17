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
};



#endif