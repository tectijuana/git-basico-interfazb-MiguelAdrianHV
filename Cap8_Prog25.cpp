#include <iostream>
 
 /**
 * Problema 25
 * 
 * Determinar la altura de cada rebote en los primeros 30 saltos teniendo en cuenta que
 * cae de 70 metros y rebota cada vez el 5/8 de la altura previa
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;

int main()
{
    double altura = 70; // Valores brindados por el problema
    double altura_menos = (double) 5/8;
    for (int i=0;i<30;i++){ // Ciclo para imprimir la altura de cada uno de los 30 rebotes
        cout << "Salto: " << i+1 << " Distancia: " << altura << "m o " << altura*100 << "cm" << endl;
        altura *= altura_menos;
    }
    
    return 0;
}