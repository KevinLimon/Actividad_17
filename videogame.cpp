#include"videogame.h"

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

size_t VideoGame::size()
{
    return civs.size();
}

void VideoGame::insertar(const Civilizacion &c, size_t n)
{
    civs.insert(civs.begin()+n, c);
}