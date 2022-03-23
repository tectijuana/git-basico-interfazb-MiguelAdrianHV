#include <iostream>
 
 /**
 * Problema 28
 * 
 * Utilizar la formula de distancia S = 16t^2 para determinar a que altura
 * ha caido un cuerpo al cabo de 6 segundos bajo la accion de la gravedad
 * 
 */

//Autor         @MiguelAdrianHV
//Fecha         22 Mar 2022

using namespace std;

int main()
{
    int t = 6; // Valor brindado por el probelma
    cout << "La distancia que cayo el cuerpo al cabo de 6 segundos es de " << 16*(t*t) << " pies"; // despliegue con distancia calculada
    return 0;
}