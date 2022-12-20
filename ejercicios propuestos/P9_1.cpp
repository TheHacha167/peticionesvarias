/*

La función leerArchivo toma como argumento el nombre del
archivo a leer y devuelve un vector de strings con las líneas
del archivo. En la función, se abre el archivo en modo lectura
y se leen las líneas una por una con la función getline, agregándolas
al vector. Luego, se cierra el archivo y se devuelve el vector con las
líneas leídas.


*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> leerArchivo(const string &nombreArchivo)
{
  // Crea un vector vacío para almacenar las líneas del archivo
  vector<string> lineas;

  // Abre el archivo en modo lectura
  ifstream archivo(nombreArchivo);

  // Si el archivo se abrió correctamente, lee las líneas del archivo y las almacena en el vector
  if (archivo.is_open())
  {
    string linea;
    while (getline(archivo, linea))
    {
      lineas.push_back(linea);
    }
    archivo.close();
  }

  // Devuelve el vector con las líneas del archivo
  return lineas;
}

int main()
{
  // Llamamos a la función para leer el archivo "palabras.txt"
  vector<string> palabras = leerArchivo("palabras.txt");

  // Imprimimos las palabras leídas del archivo
  for (const string &palabra : palabras)
  {
    cout << palabra << endl;
  }

  return 0;
}
