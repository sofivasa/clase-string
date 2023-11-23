#include <iostream>
#include <string>
int main () {
    // Crear una cdena STL
    std:: string cadena = "Este es un ejemplo de cadena STL";
    // Imprimir el tamaño de la cadena
    std:: cout << "Este es el tamaño de la cadena : " << cadena.size () << std :: endl;
// Utilizar la función empty para comprobar si la cadena está vacia
    if (cadena.empty()) {
        std:: cout<< "Esta cadena esta vacia"<< std:: endl;
    } else {
        //Imprimir la cadena
        std:: cout << "Esta cadena está vacia."<< std:: endl;
    }
    return 0;
}
