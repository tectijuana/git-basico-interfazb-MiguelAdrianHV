#include <iostream>
#include <cmath>

/**
 * Problema 31
 * 
 * Determinar el trabajo realizado a un cuerpo de 90 Kg hasta una altura de 100000 m,
 * donde la fuerza proporcional es igual a 1/7400^2 debido al centro de la Tierra
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;
 
int main()
{
    int masa = 90, h = 100000; // Valores brindados por el problema
    double F = 1/pow(7400,2);
    cout << "El trabajo aproximado realizado es de " << masa*h*F << " joules"; // Despliegue del calculo del trabajo   
    return 0;
}