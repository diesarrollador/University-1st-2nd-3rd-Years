#include <string>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iterator>
#include <vector>
using namespace std;

template <class Container>
void split(const std::string& str, Container& cont)
{
    std::istringstream iss(str);
    std::copy(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>(), std::back_inserter(cont));
}
int main(int argc, char** argv) {
    string stringIng; // Cadena ingresada
    cout << "Introduce la cantidad de personas y las velocidades de cada uno: ";
    getline(cin, stringIng); // Con esto se pide el ingreso de los datos pero como string

    std::vector<std::string> arrPartido; // Declaramos el array de datos que ingresarán
    split(stringIng, arrPartido); // partimos la cadena ingresada que contiene los datos de personas y velocidades

    int personas = atoi(arrPartido[0].c_str()); // La primera posición se asume que será el número de personas
    int velocidades[personas - 1]; // Declaramos las velocidades

    for(int i = 0; i < personas; i += 1) { // Convertimos y llenamos el array de velocidades
        velocidades[i] = atoi(arrPartido[i + 1].c_str());
    }


    // Muestro los valores obtenidos
    cout << "Personas: "<< personas << endl;
    cout << "Velocidades" << endl;
    for(int i = 0; i < personas; i += 1) {
        cout << velocidades[i] << endl;
    }

    return 0;
}
