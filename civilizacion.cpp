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

void Civilizacion::agregarFinal(const Aldeano &a)
{
    aldeanos.push_back(a);
}

void Civilizacion::agregarInicio(const Aldeano &a)
{
    aldeanos.push_front(a);
}

void Civilizacion::print()
{
    cout<<left;
    cout<<setw(15)<<"Nombre";
    cout<<setw(10)<<"Edad";
    cout<<setw(20)<<"Genero";
    cout<<setw(10)<<"Salud";
    cout<<endl;
    for(auto it = aldeanos.begin(); it != aldeanos.end(); it++){
        cout<< *it;
    }
    cout<<endl;
}

void Civilizacion::eliminarNombre(const string &nombre)
{
    for(auto it = aldeanos.begin(); it != aldeanos.end(); it++){
        Aldeano &c = *it;

        if(nombre == c.getNombre()){
            aldeanos.erase(it);
            cout<<"Se borro exitosamente"<<endl;
            break;
        }
        else{
            cout<<"No hay ningun aldeano con ese nombre"<<endl;
        }
    }
}

bool comp(const Aldeano &al)
{
    return al.getEdad() > 60;
}

void Civilizacion::eliminarEdad()
{
    aldeanos.remove_if(comp);
}

void Civilizacion::eliminarSalud(float s)
{
    aldeanos.remove_if([s](const Aldeano &a){return a.getSalud() < s;});
}

void Civilizacion::clasificarNombre()
{
    aldeanos.sort();
}
