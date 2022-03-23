#include <iostream>
#include <cmath>
 
 /**
 * Problema 23 
 * 
 * Utilizar la formula V = sqrt(2gh) para determinar la velocidad de impacto a nivel del piso
 * de un libro de bolsillo que se arroja a 1451 pies con una gravedad de 32 pies / segundo ^2
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;

int main()
{
    int h = 1451; // Valores brindados por el problema
    int g = 32;
    double V = sqrt(2*g*h); // Operacion para definir la velocidad
    cout << "La velocidad del impacto al nivel del piso es de: " << V << " pies/seg";
    return 0;
}