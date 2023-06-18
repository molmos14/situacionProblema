#include "Pelicula.h"

Pelicula::Pelicula(std::string ID, std::string Nombre, std::string Genero, double Calificacion, int Duracion, std::string Fecha_estreno) : Video(ID, Nombre, Genero, Calificacion, Duracion, Fecha_estreno){}

void Pelicula::set_Calificacion(double Calificacion){
    this -> Calificacion = Calificacion;
}

void Pelicula::mostrarinfo()
{
    std::cout << "\n\nPelicula" << std::endl;
    std::cout << "ID: " << ID << std::endl;
    std::cout << "Nombre: " << Nombre << std::endl;
    std::cout << "Genero: " << Genero << std::endl;
    std::cout << "Calificacion: " << Calificacion << std::endl;
    std::cout << "Duracion: " << Duracion << std::endl;
    std::cout << "Fecha Estreno: " << Fecha_estreno << std::endl;
}
