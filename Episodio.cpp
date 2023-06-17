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
};
