#ifndef MENU_H
#define MENU_H

#include"civilizacion.h"

Aldeano capturar()
{
    Aldeano a;
    string nombre;
    size_t edad;
    string genero;
    float salud;

    cout<<"Nombre: ";
    getline(cin, nombre);
    a.setNombre(nombre);

    cout<<"Edad: ";
    cin>>edad;
    a.setEdad(edad);

    cout<<"Genero: ";
    cin.ignore();
    getline(cin, genero);
    a.setGenero(genero);

    cout<<"Salud: ";
    cin>>salud;
    a.setSalud(salud);

    return a;
}

void menu(Civilizacion &c)
{
    string op;

    while(true)
    {
        cout<<"1) Agregar aldeano"<<endl;
        cout<<"2) Eliminar aldeano"<<endl;
        cout<<"3) Clasificar aldeano"<<endl;
        cout<<"4) Buscar aldeano"<<endl;
        cout<<"5) Modificar aldeanos"<<endl;
        cout<<"6) Mostrar aldeanos"<<endl;
        cout<<"7) Salir"<<endl;
        getline(cin, op);

        if(op=="1"){
            string opcion;
            cout<<endl;
            cout<<"1) Agregar aldeano al inicio"<<endl;
            cout<<"2) Agregar aldeano al final"<<endl;
            getline(cin, opcion);

            if (opcion=="1"){
                Aldeano al;
                cin>>al;
                c.agregarInicio(al);
                c.print();
            }
            else if(opcion=="2"){
                c.agregarFinal(capturar());
                c.print();
            }
        }
        else if(op=="2"){
                string opci;
                cout<<"1) Eliminar por nombre"<<endl;
                cout<<"2) Eliminar donde la salud sea menor a x"<<endl;
                cout<<"3) Eliminar aldeanos con salud mayor o igual a 60"<<endl;
                getline(cin, opci);
                cout<<endl;

                if(opci=="1")
                {
                    Civilizacion civ;
                    string aux;
                    cout<<"Nombre del aldeano que quieres eliminar: ";
                    getline(cin, aux);
                    civ.eliminarNombre(aux);
                }
                else if(opci=="2")
                {

                }
                else if(opci=="3")
                {

                }
        }
        else if(op=="3"){

        }
        else if(op=="4"){

        }
        else if(op=="5"){

        }
        else if(op=="6"){
            Civilizacion civ;
            civ.print();
        }
        else if(op=="7"){

        }cin.ignore();
    }
}


#endif