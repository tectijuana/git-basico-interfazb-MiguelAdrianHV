#include <iostream>

/**
 * Problema 30
 * 
 * Determinar la distancia con la formula d = rt, donde d es la distancia, r la rapidez y
 * t el tiempo, determinar la distancia con los siguientes valores de r y t
 * r = 45 km/h y t = 6h;
 * r = 60 km/h y t = 2.8h;
 * r = 125 km/h y t = 1.5h
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;
 
int main()
{
    double r1 = 45, t1 = 6, r2 = 60, t2 = 2.8, r3 = 125, t3 = 1.5; // Valores brindados por el problema
    cout << "Primera distancia = " << r1 << " * " << t1 << " = " << r1*t1 << endl; // Despliegue con calculo de distancia realiazado
    cout << "Segunda distancia = " << r2 << " * " << t2 << " = " << r2*t2 << endl;
    cout << "Tercera distancia = " << r3 << " * " << t3 << " = " << r3*t3 << endl;
    return 0;
}