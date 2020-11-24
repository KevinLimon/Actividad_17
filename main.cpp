#include<iostream>
#include "videogame.h"
using namespace std;

int main(){
    VideoGame vg;
    string opc;

    while(true){
        cout<<"1) Nombre de usuario"<<endl;
        cout<<"2) Agregar civilizacion"<<endl;
        cout<<"3) Insertar civilizacion"<<endl;
        cout<<"11) Resumen"<<endl;
        cout<<"12) Salir"<<endl;
        getline(cin, opc);

        if(opc=="1"){
            /*VideoGame v;
            cin>>v;
            cin.ignore();*/
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

            if(pos>=vg.size()){
                cout<<"Posicion no valida"<<endl;
            }
            else{
                vg.insertar(civ, pos);
            }
            cout<<endl;
        }

        else if(opc=="11"){
            vg.resumen();
            cout<<endl;
        }

        else if(opc=="12"){
            break;
        }

    }
    return 0;
}