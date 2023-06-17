/*
Manuel Olmos Antillón - A01750748 - ITC - 2° semestre
Clase Episodio heredada de Video
*/
#include "Video.h"
#ifndef EPISODIO_H
#define EPISODIO_H

class Episodio : public Video{
    private:
        int Temporada;
        int Numero_episodio;
    public:
        Episodio(std::string ID, std::string Nombre, std::string Genero, double Calificacion, int Duracion, std::string Fecha_estreno, int Temporada, int Numero_episodio);

        void set_Calificacion(double Calificacion);

        int get_Temporada();
        int get_Numero_episodio();
};

#endif