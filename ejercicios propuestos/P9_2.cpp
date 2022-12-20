/*

La función escribirArchivo toma como argumentos el
nombre del archivo donde se quiere escribir y el vector
de strings con las líneas a escribir. En la función, se abre
el archivo en modo escritura y se recorre el vector con un ciclo
for, escribiendo cada elemento del vector en una línea distinta del
archivo. Luego, se cierra el archivo.


*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void escribirArchivo(const string &nombreArchivo, const vector<string> &lineas)
{
    // Abre el archivo en modo escritura
    ofstream archivo(nombreArchivo);

    // Si el archivo se abrió correctamente, escribe las líneas del vector en el archivo
    if (archivo.is_open())
    {
        for (const string &linea : lineas)
        {
            archivo << linea << endl;
        }
        archivo.close();
    }
}

int main()
{
    // Creamos un vector con algunas líneas de texto
    vector<string> lineas = {"Línea 1", "Línea 2", "Línea 3"};

    // Llamamos a la función para escribir el vector en el archivo "salida.txt"
    escribirArchivo("salida.txt", lineas);

    return 0;
}
