/*
Manuel Olmos Antillón - A01750748 - ITC - 2° semestre
Clase Serie que se compone de Episodios
*/
#ifndef SERIE_H
#define SERIE_H
#include <vector>
#include "Episodio.h"

class Serie{
    protected:
        std::vector<Episodio> serie;
    public:
        double promedio_serie(std::string Nombre_Serie);
};

#endif