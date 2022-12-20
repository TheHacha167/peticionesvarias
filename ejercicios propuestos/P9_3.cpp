/*
La función ordenarPorLongitud toma como argumento un vector
 de strings y ordena sus elementos por longitud de forma descendente
 (de mayor a menor) usando el algoritmo de la burbuja. El algoritmo recorre
 el vector varias veces, comparando elementos adyacentes y intercambiándolos
 si están en el orden incorrecto.
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ordenarPorLongitud(vector<string> &v)
{
    // Recorre el vector varias veces, comparando elementos adyacentes y intercambiándolos si están en el orden incorrecto
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            // Compara la longitud de los elementos adyacentes y los intercambia si están en el orden incorrecto
            if (v[j].length() < v[j + 1].length())
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main()
{
    // Creamos un vector con algunas cadenas de texto
    vector<string> v = {"casa", "perro", "gato", "árbol", "pájaro", "mar"};

    // Llamamos a la función para ordenar el vector por longitud
    ordenarPorLongitud(v);

    // Imprimimos el vector ordenado
    for (const string &s : v)
    {
        cout << s << endl;
    }

    return 0;
}
