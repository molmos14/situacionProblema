/*
Manuel Olmos Antillón - A01750748
Leer el archivo de texto en c++
*/

#include <iostream>
#include <fstream> // para ifstream; flujo de datos a partir de un archivo
#include <sstream> // para stringsteam flujo de datos a partir de una cadena
#include <vector>

std::vector<std::string> separar(std::string linea);

int main(int argc, char const *argv[])
{
    std::ifstream entrada;
    entrada.open("DatosPeliculas.csv");

    std::string linea;

    int numeroLinea = 1;
    //mientras haya una linea en la entrada, sigue leyendola y regresa True
    while(getline(entrada, linea)){
        std::vector<std::string> datos = separar(linea);
        std::cout << (numeroLinea++);
        if(datos.size() == 6){
            std::cout << " Pelicula" << std::endl;
            // new Pelicula(datos);
        }else{
            std::cout << " Episodio" << std::endl;
            // new Episodio(datos);
        }
    }

    //siempre cerrar el archivo al abrirlo
    entrada.close();

    return 0;
}

std::vector<std::string> separar(std::string linea){
    std::vector<std::string> tokens;  // componentes de la linea
    std::stringstream entrada(linea); // flujo de datos a partir de una cadena

    std::string dato; // para cada token individual
    int numeroTokens;
    while(getline(entrada, dato, ',')){
        if(dato != "" && dato != "\n" && dato != "\r"){
            tokens.push_back(dato);
            numeroTokens++;
        } 
    }
    return tokens;
}
