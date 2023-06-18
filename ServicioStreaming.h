/*
    Manuel Olmos Antillón - ITC - 2° semestre
    Clase que se compone de peliculas y episodios de series
*/

#ifndef SERVICIOSTREAMING_H
#define SERVICIOSTREAMING_H
#include "Pelicula.h"
#include "Episodio.h"
#include <vector>
#include <iostream>
#include <fstream> // para ifstream; flujo de datos a partir de un archivo
#include <sstream> // para stringsteam flujo de datos a partir de una cadena

class ServicioStreaming
{
protected:
    std::vector<Pelicula*> Peliculas;
    std::vector<Episodio*> Episodios;

public:
    void mostrar_menu();
    std::vector<std::string> separar(std::string linea);

};

#endif