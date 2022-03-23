#include <iostream>
 
  /**
 * Problema 26
 * 
 * Determinar la altura total que recorre la pelota antes de quedar en reposo,
 * cae de 86 metros y rebota cada vez el 32 por ciento de la altura previa
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;

int main()
{
    double altura = 86; // Valores brindados por el problema
    double altura_menos = 0.32;
    double altura_total = 0; // Variable para mantener la cuenta de la altura total
    while (altura != 0){ // Ciclo de todas las veces que rebota la pelota hasta quedar en ceros
        altura_total += altura;
        altura *= altura_menos;
    }
    cout << "La pelota recorrio " << altura_total << "m verticalmente";
    return 0;
}