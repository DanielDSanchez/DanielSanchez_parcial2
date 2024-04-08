#pragma once

#include <iostream>
#include <vector>
#include "./VideoJuego.cpp"
using namespace std;

class VideoJuego;

class Categoria
{
private:
    string nombre;
    string descripcion;
    vector<VideoJuego *> videoJuegos;

public:
    Categoria(){};
    Categoria(string nombre, string descripcion) : nombre(nombre), descripcion(descripcion){};
    ~Categoria(){};

    string getNombre() const;
    void setNombre(string &nombre);

    string getDescripcion() const;
    void setDescripcion(string &descripcion);

    void addVideoJuego(VideoJuego *VideoJuego);
    vector<VideoJuego *> getVideoJuegos() const;

    void showCategoria() const;

    void showForm();
};

string Categoria::getNombre() const
{
    return this->nombre;
}

void Categoria::setNombre(string &nombre)
{
    this->nombre = nombre;
}

string Categoria::getDescripcion() const
{
    return this->descripcion;
}

void Categoria::setDescripcion(string &descripcion)
{
    this->descripcion = descripcion;
}

void Categoria::addVideoJuego(VideoJuego *VideoJuego)
{
    this->videoJuegos.push_back(VideoJuego);
}

vector<VideoJuego *> Categoria::getVideoJuegos() const
{
    return this->videoJuegos;
}

void Categoria::showCategoria() const
{
    cout << "--------- Categoria ---------" << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Descripcion" << this->descripcion << endl;
    cout << "--------- Juegos ---------" << endl;
    for (VideoJuego *videoJuego : this->videoJuegos)
    {
        videoJuego->showVideoJuego();
    }
}

void Categoria::showForm()
{
    cout << "------ Formulario Categoria ----------" << endl;
    cout << "Ingrese el nombre de la categoria: " << endl;
    cin >> this->nombre;
    cout << "Ingrese la descripcion de la categoria: " << endl;
    cin >> this->descripcion;
    cout << "Categoria Creada Exitosamente" << endl;
}