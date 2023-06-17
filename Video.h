/*
Manuel Olmos Antillón - A01750748 - ITC - 2° semestre
Clase Video
*/
#ifndef VIDEO_H
#define VIDEO_H
#include <string>

class Video{
    private:
        int ID;
        std::string Nombre;
        std::string Genero;
        int Calificacion;
        int Duracion;
        std::string Fecha_estreno;
    public:
        void set_ID(std::string ID);
        void set_calificacion(double Calificacion);

        std::string get_Nombre();
        std::string get_Genero();
};

#endif