#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include"civilizacion.h"
#include<vector>

class VideoGame
{
private:
    vector<Civilizacion>civs;
    string usuario;

public:
    VideoGame();
    void agregar(const Civilizacion &c);
    void insertar(const Civilizacion &c, size_t n);
    void inicializar(const Civilizacion &c, size_t n);
    void primera();
    void ultimo();
    void ordenarnombre();
    void ordenarx();
    void ordenary();
    void ordenarpunt();
    void eliminar(const string &nombre);
    Civilizacion* buscar(const Civilizacion &c);
    void total();
    void resumen();
};


#endif