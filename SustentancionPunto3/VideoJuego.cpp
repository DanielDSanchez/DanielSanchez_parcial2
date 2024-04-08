#pragma once

#include <iostream>
#include <vector>
#include "./Categoria.cpp"
using namespace std;

class Categoria;

class VideoJuego
{
private:
    string nombre;
    int cantidadJugadores = 0;
    vector<Categoria *> categorias;
    string desarrollador;
    string anoLanzamiento;
    string plataforma;

public:
    VideoJuego(){};
    VideoJuego(string nombre, int cantidadJugadores, string desarrollador, string anoLanzamiento, string plataforma) : nombre(nombre), cantidadJugadores(cantidadJugadores), desarrollador(desarrollador), anoLanzamiento(anoLanzamiento), plataforma(plataforma){};
    ~VideoJuego(){};

    string getNombre() const;
    int getCantidadJugadores() const;
    string getDesarrollador() const;
    string getAnoLanzamiento() const;
    string getPlataforma() const;
    void showVideoJuego() const;
    void showForm();
};

void VideoJuego::showVideoJuego() const
{
    cout << "Nombre VideoJuego: " << this->nombre << endl;
    cout << "Cantidad Jugadores: " << this->cantidadJugadores << endl;
    cout << "Desarrollador: " << this->desarrollador << endl;
    cout << "Año Lanzamiento: " << this->anoLanzamiento << endl;
    cout << "Plataforma: " << this->plataforma << endl;
}

void VideoJuego::showForm()
{
    cout << "------- Formulario VideoJuego ---------" << endl; 
    cout << "Ingrese el nombre del VideoJuego:" << endl;
    cin >> this->nombre;
    cout << "Ingrese el nombre del Desarrollador:" << endl;
    cin >> this->desarrollador;
    cout << "Ingrese el año de lanzamiento:" << endl;
    cin >> this->anoLanzamiento;
    cout << "Ingrese el nombre de la plataforma:" << endl;
    cin >> this->plataforma;
    cout << "Ingrese la cantidad de jugadores" << endl;
    cin >> this->cantidadJugadores;

    cout << "VideoJuego Creado Exitosamente" << endl;
};

string VideoJuego::getNombre() const
{
    return this->nombre;
}

string VideoJuego::getDesarrollador() const
{
    return this->desarrollador;
}

string VideoJuego::getAnoLanzamiento() const
{
    return this->anoLanzamiento;
}

string VideoJuego::getPlataforma() const
{
    return this->plataforma;
}

int VideoJuego::getCantidadJugadores() const
{
    return this->cantidadJugadores;
}