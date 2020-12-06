#ifndef ALDEANO_H
#define ALDEANO_H
#include <iostream>
#include<iomanip>
using namespace std;

class Aldeano
{
private:
    string nombre;
    int edad;
    string genero;
    float salud;
public:
    Aldeano() {}
    Aldeano(const string &nombre, size_t edad, const string &genero, float salud): nombre(nombre), edad(edad), genero(genero), salud(salud) {}

    void setNombre(const string &v);
    string getNombre() const;

    void setEdad(int v);
    int getEdad() const;

    void setGenero(const string &v);
    string getGenero();

    void setSalud(float v);
    float getSalud() const;

    friend ostream& operator<<(ostream &out, const Aldeano &a)
    {
        out<<left;
        out << setw(15) << a.nombre;
        out << setw(10) << a.edad;
        out << setw(20) << a.genero;
        out << setw(10) << a.salud;
        out<<endl;
        return out;
    }

    friend istream& operator>>(istream &in, Aldeano &a)
    {
        cout<<"Nombre: ";
        getline(cin, a.nombre);
        cout<<"Edad: ";
        cin>>a.edad;
        cout<<"Genero: ";
        cin.ignore();
        getline(cin, a.genero); 
        cout<<"Salud: ";
        cin>>a.salud;
        return in;
    }

    bool operator==(const string& c) const{
        return nombre == c;
    }
    bool operator==(const string& c){
        return nombre == c;
    }

    bool operator<(const Aldeano &a) const
    {
        return nombre < a.getNombre();
    }
};


#endif