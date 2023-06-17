/*
Manuel Olmos Antillón - A01750748 - ITC - 2° semestre
Clase Pelicula heredada de Video
*/
#include "Video.h"
#ifndef PELICULA_H
#define PELICULA_H

class Pelicula : public Video{
    public:
        Pelicula(std::string ID, std::string Nombre, std::string Genero, double Calificacion, int Duracion, std::string Fecha_estreno);

        void set_Calificacion(double Calificacion);
};

#endif