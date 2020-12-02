#include"videogame.h"
#include<algorithm>

VideoGame::VideoGame()
{

}

void VideoGame::setUsuario(const string &v)
{
    usuario = v;
}

string VideoGame::getUsuario()
{
    return usuario;
}

void VideoGame::agregar(const Civilizacion &c)
{
    civs.push_back(c);
}

void VideoGame::resumen()
{
    cout<<left;
    cout<<setw(13)<<"Nombre";
    cout<<setw(20)<<"Ubicacion en x";
    cout<<setw(20)<<"Ubicacion en y";
    cout<<setw(10)<<"Puntuacion";
    cout<<endl;
    for(size_t i=0;i<civs.size();i++){
        Civilizacion &c = civs[i];
        cout<<c;
    }
}

size_t VideoGame::total()
{
    return civs.size();
}

void VideoGame::insertar(const Civilizacion &c, size_t n)
{
    civs.insert(civs.begin()+n, c);
}

void VideoGame::inicializar(const Civilizacion &c, size_t n)
{
    civs = vector<Civilizacion>(n, c);
}

Civilizacion* VideoGame::primera()
{
    if(civs.empty()){
        return nullptr;
    }
    else{
        return &civs.front();
    }
}

Civilizacion* VideoGame::ultimo()
{
    if(civs.empty()){
        return nullptr;
    }
    else{
        return &civs.back();
    }
}

void VideoGame::ordenarnombre()
{
    sort(civs.begin(), civs.end(), [](Civilizacion c1, Civilizacion c2){return c1.getNombre()>c2.getNombre();});
}

void VideoGame::ordenarx()
{
    sort(civs.begin(), civs.end(), [](Civilizacion c1, Civilizacion c2){return c1.getUbx()>c2.getUbx();}); 
}

void VideoGame::ordenary()
{
    sort(civs.begin(), civs.end(), [](Civilizacion c1, Civilizacion c2){return c1.getUby()>c2.getUby();}); 
}

void VideoGame::ordenarpunt()
{
    sort(civs.begin(), civs.end(), [](Civilizacion c1, Civilizacion c2){return c1.getPunt()>c2.getPunt();}); 
}

Civilizacion* VideoGame::eliminar(const string &nombre)
{
    auto it = find(civs.begin(), civs.end(), nombre);
    if(it == civs.end()){
        return nullptr;
    }
    else{
        return &(*civs.erase(it));
    }
}

Civilizacion* VideoGame::buscar(const string &c)
{
    auto it = find(civs.begin(), civs.end(), c);
    if(it == civs.end()){
        return nullptr;
    }
    else{
        return &(*it);
    }
}