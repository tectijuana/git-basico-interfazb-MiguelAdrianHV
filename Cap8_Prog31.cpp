#include <iostream>
#include <cmath>

/**
 * Problema 31
 * 
 * Determinar la resultante de dos fuerzas que actuan simultaneamente sobre un punto,
 * determinar esta resultante dadas las amgnitudes y angulos de direccion de ambas fuerzas
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;

int main()
{
    double F1, F2, A1, A2, At; // Variables necesarias para calculos
    cout << "Ingrese el valor de la primera fuerza: "; // Entarda de las fuerzas y sus angulos
    cin >> F1;
    cout << "Ingrese el valor del primer angulo: ";
    cin >> A1;
    cout << "Ingrese el valor de la segunda fuerza: ";
    cin >> F2;
    cout << "Ingrese el valor del segundo angulo: ";
    cin >> A2;

    while (A1 > 360 || A2 > 360) // Verificacion de que los angulos esten a menos de 360 grados para determinar correctamemte el angulo resultante
    {
        if (A1 > 360)
        {
            A1 -= 360;
        }
        else if (A2 > 360)
        {
            A2 -= 360;
        }
    }
    double dif = abs(A1 - A2); // Determinacion de angulo resultante segun la diferencia entre los angulos
    if (A1 > A2)
    {
        At = A1 - dif / 2;
    }
    else
    {
        At = A2 - dif / 2;
    }
    cout << "La fuerza total es: " << F1 + F2 << "N" << endl; // Despliegue de datos y suma de fuerzas
    cout << "La suma de los angulos es de: " << At << " grados";

    return 0;
}