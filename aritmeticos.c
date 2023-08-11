/*
ejemplo
*/

#include <stdio.h>
int main()

  {
      int num1,num2,resultado;
      int a = 12;
      int b = 3 ;
    printf("ingrese el primer valor:\n");
    scanf("%d",&num1);
    printf("\ningrese el segundo valor:\n");
    scanf("%d",&num2);
    resultado = a*(num1 + num2 )+b*(b+num2); //suma de los dos valores ingresados por
    printf("el resultado es: %d\n",resultado);
    return 0;
  }