#include "Episodio.h"

Episodio::Episodio(std::string ID, std::string Nombre, std::string Genero, double Calificacion, int Duracion, std::string Fecha_estreno, int Temporada, int Numero_episodio) : Video(ID, Nombre, Genero, Calificacion, Duracion, Fecha_estreno){
    this -> Temporada = Temporada;
    this -> Numero_episodio = Numero_episodio;
}

void Episodio::set_Calificacion(double Calificacion){
    this -> Calificacion = Calificacion;
}

int Episodio::get_Temporada()
{
    return this -> Temporada;
}

int Episodio::get_Numero_episodio()
{
    return this -> Numero_episodio;
}

void Episodio::mostrarinfo()
{
    std::cout << "\n\nEpisodio" << std::endl;
    std::cout << "ID: " << ID << std::endl;
    std::cout << "Nombre: " << Nombre << std::endl;
    std::cout << "Genero: " << Genero << std::endl;
    std::cout << "Calificacion: " << Calificacion << std::endl;
    std::cout << "Duracion: " << Duracion << std::endl;
    std::cout << "Fecha Estreno: " << Fecha_estreno << std::endl;
    std::cout << "Temporada: " << Temporada << std::endl;
    std::cout << "Numero de episodio: " << Numero_episodio << std::endl;
}

