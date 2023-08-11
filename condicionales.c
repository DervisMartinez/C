/*
toma de deciciones if
Operadores de Igualdad      | operadores de relacion 
== x es igualñ a y             > x es mayor que Y
                                < x es menor que y    
                             >= x es mayor o igual que y
                             <= x es menor o igual que y
!= x es diferente de y */  

#include <stdio.h>
int main(){

int edad ;
printf("Ingrese su edad: "); //pedir la informacion al usuario
scanf("%d", &edad);
if(edad>=18){
    printf("eres mayor de edad\n");
}else if (edad == 17){
    printf ("Eres un bebe!\n" );
}  

else {
    printf("eres menor de edad\n");
}


    return 0 ; /*termina el programa s*/
}