#include "Pelicula.h"

Pelicula::Pelicula(std::string ID, std::string Nombre, std::string Genero, double Calificacion, int Duracion, std::string Fecha_estreno) : Video(ID, Nombre, Genero, Calificacion, Duracion, Fecha_estreno){}

void Pelicula::set_Calificacion(double Calificacion){
    this -> Calificacion = Calificacion;
};