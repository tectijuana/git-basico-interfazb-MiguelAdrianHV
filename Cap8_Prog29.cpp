#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

/**
 * Problema 29
 * 
 * Calcular la corriente para un cierto numero de valores de capacitancia espaciados para
 * voltajes de 1, 2 y 3 volts. Tomando R,F y L como valores de entrada por el programa, asi como
 * los valores inical y final de capacitancia
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;
 
double Corriente(double E, double R, double F, double L, double C){ // Funcion de calculo de corrient
     return E/sqrt((R*R)+pow(((2*M_PI*F*L)-(1/(2*M_PI*F*C))),2));
}
int main()
{
    double E,R,F,L,C; // Variables necesarias para la formula
    double I;
    cout << "Ingrese la resistencia en Ohms (R): "; cin >> R; // Entrada de valores necesarios
    cout << "Ingrese la frecuancia en ciclos/seg. (F): "; cin >> F;
    cout << "Ingrese la inductancia en Henrys (L): "; cin >> L;
    cout << "Ingrese la capacitancia en Farads (C): "; cin >> C;
    cout << endl;

    for(int i = 0; i<3; i++){ // Ciclo para calcular la corriente con 1, 2 y 3 volts
        I = (double) Corriente(i+1,R,F,L,C);
        cout << "La corriente con " << i+1 << " volt es de " << I << " amperes" << endl << endl; // despliegue de corrinte
    }
    
    return 0;
}