#include <iostream>

/**
 * Problema 27
 * 
 * Determinar cuantas veces rebotara una pelota antes de alcanzar 1 pie si
 * cae de una altura de 6 pies y rebota 0.8 veces la altura anterior
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;

int main()
{
    double altura = 6; // Valores que nos brinda el problema
    double altura_menos = 0.8;
    int n = 0; // Contador de rebotes
    while (altura > 1){ // Ciclo de rebotes hasta que su altura sea menor de 1
        n++;
        altura *= altura_menos;
    }
    cout << "La pelota reboto " << n << " veces antes que su distancia de rebote sea de 1 pie";
    return 0;
}