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
        else if(it == aldeanos.begin()){
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

bool comparador(const Aldeano &a1, const Aldeano &a2)
{
    return a1.getEdad() > a2.getEdad();
}

void Civilizacion::clasificarEdad()
{
    aldeanos.sort(comparador);
}

void Civilizacion::clasificarSalud()
{
    aldeanos.sort([](const Aldeano &a1, const Aldeano &a2){return a1.getSalud() > a2.getSalud();});
}

void Civilizacion::buscar(const string &nombre)
{
    if(aldeanos.empty()){
        cout<<"Esta lista esta vacia"<<endl;
    }
    else{
        for(auto it = aldeanos.begin(); it != aldeanos.end(); it++){
        Aldeano &c = *it;

        if(nombre == c.getNombre()){
            cout<<left;
            cout<<setw(15)<<"Nombre";
            cout<<setw(10)<<"Edad";
            cout<<setw(20)<<"Genero";
            cout<<setw(10)<<"Salud";
            cout<<endl;
            cout<< *it <<endl;
            break;
        }
        else if(it == aldeanos.begin()&&it == aldeanos.end()){
            cout<<"No hay ningun aldeano con ese nombre"<<endl;
        }
    }
    }
    
}

void Civilizacion::modificar(const string &nombre)
{
    for(auto it = aldeanos.begin(); it != aldeanos.end(); it++){
        Aldeano &c = *it;

        if(nombre == c.getNombre()){
            string op;
            cout<<left;
            cout<<setw(15)<<"Nombre";
            cout<<setw(10)<<"Edad";
            cout<<setw(20)<<"Genero";
            cout<<setw(10)<<"Salud";
            cout<<endl;
            cout<< *it <<endl;
            cout<<"1) Modificar nombre"<<endl;
            cout<<"2) Modificar Edad"<<endl;
            cout<<"3) Modificar genero"<<endl;
            cout<<"4) Modificar salud"<<endl;
            getline(cin, op);
            if(op=="1")
            {
                string nv;
                cout<<"Nuevo nombre: ";
                getline(cin, nv);
                c.setNombre(nv);
            }
            else if(op=="2")
            {
                size_t nv;
                cout<<"Nueva edad: ";
                cin>>nv;
                cin.ignore();
                c.setEdad(nv);
            }
            else if(op=="3")
            {
                string nv;
                cout<<"Nuevo genero: ";
                getline(cin, nv);
                c.setGenero(nv);
            }
            else if(op=="4")
            {
                float nv;
                cout<<"Nueva salud: ";
                cin>>nv;
                cin.ignore();
                c.setSalud(nv);
            }
            break;
        }
    }
}

void Civilizacion::setPuntaje(int p)
{
     puntaje = p;
}

int Civilizacion::getPuntaje()
{
    return puntaje;
}

