#include "ServicioStreaming.h"
#include <limits>

void ServicioStreaming::mostrar_menu()
{
    {
        // Crea una variable para guardar la opción elegida
        int opcion;
        int opcion2;
        std::string nombre_archivo;
        std::string linea;
        double cal;
        std::string genero;
        std::string serie_elegida;
        std::ifstream entrada;
        int numeroLinea = 1;

        // Crea un bucle que se repite hasta que el usuario elija salir
        do
        {
            // Muestra las opciones del menú
            std::cout << "Menu de opciones:" << std::endl;
            std::cout << "1. Cargar el archivo de datos en formato csv." << std::endl;
            std::cout << "2. Mostrar los videos en general con:" << std::endl;
            std::cout << "   1) Una calificacion mayor o igual a un valor tecleado por el usuario." << std::endl;
            std::cout << "   2) Un genero tecleado por el usuario." << std::endl;
            std::cout << "3. Mostrar todos los episodios de una determinada serie que teclea el usuario." << std::endl;
            std::cout << "4. Mostrar las películas con una calificacion mayor a un número tecleado." << std::endl;
            std::cout << "5. Calificar un video." << std::endl;
            std::cout << "6. Calcular el promedio de la calificacion de una serie (promedio de todos los episodios)." << std::endl;
            std::cout << "7. Salir." << std::endl;

            // Pide al usuario que ingrese una opción
            std::cout << "Ingrese una opcion: ";
            std::cin >> opcion;

            // Ejecuta la acción correspondiente a la opción elegida
            switch (opcion)
            {
            case 1:
                // std::cout << "Dame el nombre del archivo: ";
                // std::cin >> nombre_archivo;
                // Excepciones
                entrada.exceptions(std::ifstream::failbit);
                try
                {
                    entrada.open("DatosPeliculas.csv");
                }
                catch (std::ifstream::failure &e)
                { // try / catch atrapa errores y evalua donde posiblemente haya errores
                    std::cout << "ERROR excepcion al abrir el archivo" << std::endl;
                    continue;
                }

                // mientras haya una linea en la entrada, sigue leyendola y regresa True
                while (getline(entrada, linea))
                {

                    std::vector<std::string> datos = separar(linea);

                    if (datos.size() == 6)
                    {
                        Pelicula *pelicula = new Pelicula(datos[0], datos[1], datos[2], std::stod(datos[3]), std::stoi(datos[4]), datos[5]);
                        Peliculas.push_back(pelicula);
                    }
                    else
                    {
                        Episodio *episodio = new Episodio(datos[0], datos[1], datos[2], std::stod(datos[3]), std::stoi(datos[4]), datos[5], std::stoi(datos[6]), std::stoi(datos[7]));
                        Episodios.push_back(episodio);
                    }
                }
                break;

            case 2:
                std::cout << "Ingrese una opción: ";
                std::cin >> opcion2;
                switch (opcion2)
                {
                case 1:
                    std::cout << "Dame una calificacion: ";
                    std::cin >> cal;

                    for (Pelicula *dato : Peliculas)
                    {
                        if (dato->get_Calificacion() >= cal)
                        {
                            dato->mostrarinfo();
                        }
                    }

                    for (Episodio *dato : Episodios)
                    {
                        if (dato->get_Calificacion() >= cal)
                        {
                            dato->mostrarinfo();
                        }
                    }
                    break;

                case 2:
                    std::cout << "Los Generos son: Aventura - Accion - Drama - Fantasy - Romance - Sci-Fi - Suspenso - Animacion - Familiar - Guerra - Musical - Comedia" << std::endl;
                    std::cout << "Dame un Genero: ";
                    std::cin >> genero;

                    for (Pelicula *dato : Peliculas)
                    {
                        size_t pos = dato->get_Genero().find(genero);
                        if (pos != std::string::npos)
                        {
                            dato->mostrarinfo();
                        }
                    }

                    for (Episodio *dato : Episodios)
                    {
                        size_t pos = dato->get_Genero().find(genero);
                        if (pos != std::string::npos)
                        {
                            dato->mostrarinfo();
                        }
                    }
                    break;

                default:
                    std::cout << "Opción inválida. Intente de nuevo." << std::endl;
                    break;
                }

                break;

            case 3:
                std::cout << "Series: " << std::endl;
                for (Episodio *dato : Episodios)
                {
                    if (dato->get_Calificacion() >= cal)
                    {
                        dato->mostrarinfo();
                    }
                }
                std::cout << "Dame el nombre de la serie elegida: ";
                std::cin >> serie_elegida;

                for (Episodio *dato : Episodios)
                {
                    size_t pos = dato->get_Nombre().find(serie_elegida);
                    if (pos != std::string::npos)
                    {
                        dato->mostrarinfo();
                    }
                }
                break;
            case 4:
                std::cout << "Dame una calificacion: ";
                std::cin >> cal;

                for (Pelicula *dato : Peliculas)
                {
                    if (dato->get_Calificacion() >= cal)
                    {
                        dato->mostrarinfo();
                    }
                }
                break;
            case 5:
                std::cout << "prueba" << std::endl;
                break;
            case 6:
                std::cout << "prueba" << std::endl;

                break;
            case 7:
                std::cout << "Gracias por usar el programa. Adiós." << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Intente de nuevo." << std::endl;
                break;
            }
        } while (opcion != 7); // Repite el bucle mientras la opción no sea salir
    }
}

std::vector<std::string> ServicioStreaming::separar(std::string linea)
{
    std::vector<std::string> tokens;  // componentes de la linea
    std::stringstream entrada(linea); // flujo de datos a partir de una cadena

    std::string dato; // para cada token individual
    while (getline(entrada, dato, ','))
    {
        if (dato != "" && dato != "\n" && dato != "\r")
        {
            tokens.push_back(dato);
        }
    }
    return tokens;
}