#include "Video.h"

Video::Video(std::string ID, std::string Nombre, std::string Genero, double Calificacion, int Duracion, std::string Fecha_estreno) : ID(ID), Nombre(Nombre), Genero(Genero), Calificacion(Calificacion), Duracion(Duracion), Fecha_estreno(Fecha_estreno){};

std::string Video::get_ID()
{
    return this -> ID;
}

std::string Video::get_Nombre()
{
    return this -> Nombre;
}

std::string Video::get_Genero()
{
    return this -> Genero;
}

double Video::get_Calificacion()
{
    return this -> Calificacion;
}

int Video::get_Duracion()
{
    return this -> Duracion;
}

std::string Video::get_Fecha_estreno()
{
    return this -> Fecha_estreno;
}
