#include<iostream>
#include "videogame.h"
#include"menu.h"
using namespace std;

int main(){

    /*Civilizacion c;
    Aldeano a1, a2;
    cin>>a1;
    cout<<endl;
    cin>>a2;

    c.agregarInicio(a2);
    c.agregarFinal(a1);

    c.print();*/

    VideoGame vg;
    string opc;

    while(true){
        cout<<"1) Nombre de usuario"<<endl;
        cout<<"2) Agregar civilizacion"<<endl;
        cout<<"3) Insertar civilizacion"<<endl;
        cout<<"4) Crear civilizaciones"<<endl;
        cout<<"5) Primera civilizacion"<<endl;
        cout<<"6) Ultima civilizacion"<<endl;
        cout<<"7) Ordenar"<<endl;
        cout<<"8) Eliminar civilizacion"<<endl;
        cout<<"9) Buscar civilizacion por nombre"<<endl;
        cout<<"10) Modificar civilizacion"<<endl;
        cout<<"11) Resumen"<<endl;
        cout<<"12) Buscar civilizacion y agregar aldeanos"<<endl;
        cout<<"13) Salir"<<endl;
        getline(cin, opc);
        cout<<endl;
        

        if(opc=="1"){
            cin>>vg;
            cout<<endl;
        }

        else if(opc=="2"){
            Civilizacion civ;
            cin>>civ;
            vg.agregar(civ);
            cin.ignore();
            cout<<endl;
        }

        else if(opc=="3"){
            Civilizacion civ;
            cin>>civ;

            size_t pos;
            cout<<"Posicion: ";
            cin>>pos;
            cin.ignore();

            if(pos>=vg.total()){
                cout<<"Posicion no valida"<<endl;
            }
            else{
                vg.insertar(civ, pos);
            }
            cout<<endl;
        }

        else if(opc=="4"){
            Civilizacion civ;
            cin>>civ;
            size_t n;
            cout<<"Numero de civilizaciones que se crearan: ";
            cin>>n;
            cin.ignore();

            vg.inicializar(civ, n);
            cout<<endl;
        }

        else if(opc=="5"){
            Civilizacion *ptr = vg.primera();
            if(ptr==nullptr){
                cout<<"El vector esta vacio"<<endl;
            }
            else{
                cout<<left;
                cout<<setw(13)<<"Nombre";
                cout<<setw(20)<<"Ubicacion en x";
                cout<<setw(20)<<"Ubicacion en y";
                cout<<setw(10)<<"Puntuacion";
                cout<<endl;
                cout<<*ptr<<endl;
            }
        }

        else if(opc=="6"){
            Civilizacion *ptr = vg.ultimo();
            if(ptr==nullptr){
                cout<<"El vector esta vacio"<<endl;
            }
            else{
                cout<<left;
                cout<<setw(13)<<"Nombre";
                cout<<setw(20)<<"Ubicacion en x";
                cout<<setw(20)<<"Ubicacion en y";
                cout<<setw(10)<<"Puntuacion";
                cout<<endl;
                cout<<*ptr<<endl;
            }
        }

        else if(opc=="7"){
            string op;
            cout<<"1) Ordenar por nombre"<<endl;
            cout<<"2) Ordenar por ubicacion en x"<<endl;
            cout<<"3) Ordenar por ubicacion en y"<<endl;
            cout<<"4) Ordenar por puntuacion"<<endl;
            getline(cin, op);

            if(op=="1"){
                vg.ordenarnombre();
            }
            else if(op=="2"){
                vg.ordenarx();
            }
            else if(op=="3"){
                vg.ordenary();
            }
            else if(op=="4"){
                vg.ordenarpunt();
            }
        }

        else if(opc=="8"){
            string aux;
            cout<<"Nombre de la civilizacion a eliminar: ";
            getline(cin, aux);
            Civilizacion *ptr = vg.eliminar(aux);
            if(ptr==nullptr){
                cout<<"No se encontro el nombre en el vector"<<endl;
            }
            else{
                *ptr;
            }
            cout<<endl;
        }

        else if(opc=="9"){
            string aux;
            cout<<"Nombre de la civilizacion a buscar: ";
            getline(cin, aux);
            Civilizacion *ptr = vg.buscar(aux);

            if(ptr==nullptr){
                cout<<"No encontrado"<<endl;
            }
            else{
                cout<<left;
                cout<<setw(13)<<"Nombre";
                cout<<setw(20)<<"Ubicacion en x";
                cout<<setw(20)<<"Ubicacion en y";
                cout<<setw(10)<<"Puntuacion";
                cout<<endl;
                cout<<*ptr<<endl;
            }
            cout<<endl;
        }

        else if(opc=="10"){
            Civilizacion civ;
            string aux;
            string op;
            cout<<"Nombre de la civilizacion a modificar: ";
            getline(cin, aux);
            Civilizacion *ptr = vg.buscar(aux);

            if(ptr==nullptr){
                cout<<"Esta civilizacion no esta en el vector"<<endl;
            }
            else{
                cout<<left;
                cout<<setw(13)<<"Nombre";
                cout<<setw(20)<<"Ubicacion en x";
                cout<<setw(20)<<"Ubicacion en y";
                cout<<setw(10)<<"Puntuacion";
                cout<<endl;
                cout<<*ptr<<endl;
                cout<<"1) Modificar nombre"<<endl;
                cout<<"2) Modificar ubicacion en x"<<endl;
                cout<<"3) Modificar ubicacion en y"<<endl;
                cout<<"4) Modificar puntuacion"<<endl;
                getline(cin, op);
                if(op=="1"){
                    string k;
                    cout<<"Nuevo nombre: ";
                    getline(cin, k);
                    ptr->setNombre(k);
                }
                else if(op=="2"){
                    float x;
                    cout<<"Nueva ubicacion en x: ";
                    cin>>x;
                    ptr->setUbx(x);
                }
                else if(op=="3"){
                    float y;
                    cout<<"Nueva ubicacion en y: ";
                    cin>>y;
                    ptr->setUby(y);
                }
                else if(op=="4"){
                    int p;
                    cout<<"Nueva puntuacion: ";
                    cin>>p;
                    ptr->setPunt(p);
                }
                cin.ignore();
            }
        }

        else if(opc=="11"){
            cout<<"Usuario: "<<vg<<"                     Total: "<<vg.total()<<endl;
            vg.resumen();
            cout<<endl;
        }

        else if(opc=="12"){
            string aux;
            cout<<"Nombre de la civilizacion a buscar: ";
            getline(cin, aux);
            Civilizacion *ptr = vg.buscar(aux);

            if(ptr==nullptr){
                cout<<"No encontrado"<<endl;
            }
            else{
                Civilizacion &civ = *ptr;
                cout<<"Si se encontro la civilizacion"<<endl;
                menu(civ);
            }
        }


        else if(opc=="13"){
            break;
        }
        else{
            cout<<"Opcion no valida"<<endl;
        }
    }
    return 0;
}