#ifndef MENU_H
#define MENU_H

#include"civilizacion.h"
#include"videogame.h"

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
    int puntaje;
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
        cout<<endl;

        if(op=="1"){
            string opcion;
            cout<<endl;
            cout<<"1) Agregar aldeano al inicio"<<endl;
            cout<<"2) Agregar aldeano al final"<<endl;
            getline(cin, opcion);
            cout<<endl;

            if (opcion=="1"){
                Aldeano al;
                cin>>al;
                puntaje = c.getPuntaje();
                c.setPuntaje(puntaje+100);
                cin.ignore();
                c.agregarInicio(al);
            }
            else if(opcion=="2"){
                int puntaje;
                c.agregarFinal(capturar());
                puntaje = c.getPuntaje();
                c.setPuntaje(puntaje+100);
                cin.ignore();
            }
            else{
                cout<<"Opcion no valida"<<endl;
            }
        }
        else if(op=="2"){
                string opci;
                cout<<"1) Eliminar por nombre"<<endl;
                cout<<"2) Eliminar donde la salud sea menor a x"<<endl;
                cout<<"3) Eliminar aldeanos con edad mayor o igual a 60"<<endl;
                getline(cin, opci);
                cout<<endl;

                if(opci=="1")
                {
                    string aux;
                    cout<<"Nombre del aldeano que quieres eliminar: ";
                    getline(cin, aux);
                    c.eliminarNombre(aux);
                }
                else if(opci=="2")
                {
                    float aux;
                    cout<<"X: ";
                    cin>>aux;
                    cin.ignore();
                    c.eliminarSalud(aux);
                }
                else if(opci=="3")
                {
                    c.eliminarEdad();
                }
                else{
                    cout<<"Opcion no valida"<<endl;
                }
        }
        else if(op=="3"){
            string o;
            cout<<"1) Clasificar aldeanos por nombre"<<endl;
            cout<<"2) Clasificar aldeanos por edad"<<endl;
            cout<<"3) Ordenar aldeanos por salud"<<endl;
            getline(cin, o);

            if(o == "1"){
                c.clasificarNombre();
            }

            else if(o == "2"){
                c.clasificarEdad();
            }

            else if(o == "3"){
                c.clasificarSalud();
            }
            else{
                cout<<"Opcion no valida"<<endl;
            }
        }
        else if(op=="4"){
            string aux;
            cout<<"Nombre del aldeano a buscar: ";
            getline(cin, aux);
            c.buscar(aux);
            cout<<endl;
        }
        else if(op=="5"){
            string aux;
            cout<<"Nombre del aldeano a modificar: ";
            getline(cin, aux);
            cout<<endl;
            c.modificar(aux);
            cout<<endl;
        }
        else if(op=="6"){
            cout<<endl;
            cout <<"                  Puntaje: "<<c.getPuntaje()<<endl;
            cout<<endl;
            c.print();
        }
        else if(op=="7"){
            break;
        }
        else{
            cout<<"Opcion no valida"<<endl;
        }
    }
}


#endif