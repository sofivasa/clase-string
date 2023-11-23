#include <iostream>
#include <string>

int main () {
    //Crear cadena
    std:: string cadena = "Ejemplo 3";
    //Imprimir cadena
    std:: string subcadena_buscar= "3";
    //Buscar cadena
    size_t indice_inicio= cadena.find(subcadena_buscar);
    // Imprimir cadena
    if (indice_inicio != std::string::npos){

        std:: cout<< "La subcadena"<< subcadena_buscar<< "se encuentra en la posicion"<<indice_inicio<<std ::endl;

        std:: string nueva_subcadena= "tres";
        cadena.replace(indice_inicio,subcadena_buscar.size(),nueva_subcadena);
        std::cout<<"La nueva cadena es:"<<cadena<<std::endl;
    } else {
        std::cout << "La subcadena '" << subcadena_buscar << "' no se encuentra en la cadena." << std::endl;
    }

    return 0;
}

