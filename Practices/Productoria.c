#include <stdio.h>


int main()
{
    //var
    int n ,product;

    //leo los digito del usuario
    printf("Ingrese desde donde desea multiplicar --->");
    scanf("%d",&n);
    printf("iingrese hasta donde desea multiplicar --->");
    scanf("%d",&product);

    for(int i = 1 ; i <= n ; i++)
    {
        //operacion
        product *= i;
    }
    printf("El resultado de la productoria es ---> %d",n,product);    
}