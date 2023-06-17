/*
Manuel Olmos Antillón - A01750748 - ITC - 2° semestre
Clase Video
*/
#ifndef VIDEO_H
#define VIDEO_H
#include <string>

class Video{
    protected:
        std::string ID;
        std::string Nombre;
        std::string Genero;
        double Calificacion;
        int Duracion;
        std::string Fecha_estreno;
    public:
        Video(std::string ID, std::string Nombre, std::string Genero, double Calificacion, int Duracion, std::string Fecha_estreno);

        virtual void set_Calificacion(double Calificacion) = 0;

        std::string get_ID();
        std::string get_Nombre();
        std::string get_Genero();
        double get_Calificacion();
        int get_Duracion();
        std::string get_Fecha_estreno();
};

#endif