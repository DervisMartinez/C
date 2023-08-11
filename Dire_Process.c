/*
Directivas del Preprocesador

*/

#include <stdio.h>
#define PI 3.14159  // Crea constantes simbolicas y macros
# define CUBO(a) a*a*a

int main()
{
    /*int suma;
    suma = PI + 3;
    printf("%i\n",suma);*/

    int a = 3;
    printf("el cubo de la variable a es: %i\n", CUBO(a));
    
    return 0 ;
}