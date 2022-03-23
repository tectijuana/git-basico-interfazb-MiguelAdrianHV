#include <iostream>
 
/**
 * Problema 24 
 * 
 * Determinar aproximadamenta hasta donde avanzara una pelota en su vigesimo salto sobre
 * la superficie si en un principio cae de 10 metros y cada rebote llega a dos tercios de la altura anterior
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;

int main()
{
    double altura = 10; // Valor brindado por el problema
    for (int i=0;i<20;i++){ // Ciclo para simular el paso de los rebotes y perdida de altura
        altura *= 0.66;
    }
    cout << "La pelota alcanzara una distancia de " << altura << " m o " << altura*100 << " cm en el vigesimo salto";
    return 0;
}