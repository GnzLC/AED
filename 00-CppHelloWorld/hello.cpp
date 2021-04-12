#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt"); // Crea un fichero de salida

    file << "Hello, world!" << endl; //Enviamos una cadena al fichero

    file.close(); // Cerramos el fichero.
}