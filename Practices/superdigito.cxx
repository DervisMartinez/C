#include <stdio.h>

void SuperDigito(int n, int *presult);
void Control(int n);

void main(){
    int cant;

    scanf("%i", &cant);
    Control(cant);

}

void Control(int n){                                        /*LLeva el control del Ciclo*/

    int num,k,numero,result;

    if(n==1){
        scanf("%i %i", &numero,&k);
        num=numero;
        SuperDigito(num,&result);
        num=result*(k);
        result=0;
        SuperDigito(num,&result);
        printf("El Superdigito de %i es %i", numero,result);
    }else{
        scanf("%i %i", &numero,&k);
        num=numero;
        SuperDigito(num,&result);
        num=result*(k);
        result=0;
        SuperDigito(num,&result);
        printf("El Superdigito de %i es %i", numero,result);
        Control(n-1);
    }
}

void SuperDigito(int n, int *presult){                    /*Va separando al numero mod 10 y suma sus digitos */

    int aux;

    if(n<10){
        *presult=n;
    }else{
        aux=(n%10);
        SuperDigito(n/10,presult);
        *presult=*presult+aux;
    }


}