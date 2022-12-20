/*

La función recibe un vector de strings vec y realiza una
ordenación por selección. En cada iteración del bucle exterior,
se busca el elemento más grande (en este caso, el string más largo)
en el vector y se coloca al principio del vector. Luego, se repite el
proceso con el resto del vector, excluyendo el elemento ya ordenado.


el primer codigo no usa el namespace std;
el segundo si(es lo mismo vaya) pero por si no lo ves claro


*/
/*
#include <string>
#include <vector>

void selectionSort(std::vector<std::string> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j].length() > vec[maxIndex].length())
            {
                maxIndex = j;
            }
        }
        std::swap(vec[i], vec[maxIndex]);
    }
}
*/
#include <string>
#include <vector>

using namespace std;

void selectionSort(vector<string>& vec) {
  for (int i = 0; i < vec.size(); i++) {
    int maxIndex = i;
    for (int j = i + 1; j < vec.size(); j++) {
      if (vec[j].length() > vec[maxIndex].length()) {
        maxIndex = j;
      }
    }
    swap(vec[i], vec[maxIndex]);
  }
}
