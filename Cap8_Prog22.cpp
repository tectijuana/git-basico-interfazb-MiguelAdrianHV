#include <iostream>
 
/**
 * Problema 22 
 * 
 * Utilizar la ecuacion d = 1/2gt^2 para demostrar que dos piedras de diferentes tamaños 
 * caen con la misma rapidez con un valor de gravedad = 32 y tiempo = 3 segundos
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;

int main()
{
    int g = 32; // Valores que nos brinda el problema
    int t = 3;
    double d = (g*(t*t))/2; // Operacion para definicion de la distancia
    cout << "La distancia de las piedras a los tres segundos es de: " << d << "m";
    return 0;
}