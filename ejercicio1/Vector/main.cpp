#include "vector.h"
#include <iostream>
#include <cmath>

using namespace std;

float distancia(Vector v1, Vector v2){
    float pow1 = pow((v1.getAbsisa() - v2.getAbsisa()), 2);
    float pow2 = pow((v1.getOrdenada() - v1.getOrdenada()), 2);
    float res = sqrt((pow1 + pow2));
    return res;
}



int main(int argn, char* args[]) {
    float abscisa, ordenada;
    cout << "Ingrese el valor para abscisa: ";
    cin >> abscisa;
    cout << "Ingrese el valor para ordenada: ";
    cin >> ordenada;
    Vector v1(abscisa,ordenada);

    cout << "Ingrese el valor para abscisa: ";
    cin >> abscisa;
    cout << "Ingrese el valor para ordenada: ";
    cin >> ordenada;
    Vector v2(abscisa,ordenada);

    float dst = distancia(v1,v2);

    cout << endl << "La distancia es es " << dst << endl;
    return 0;
}

