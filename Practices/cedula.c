#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int id, resultado, ultimo, d;
    div_t answer;
    int pares = 0;
    int impares = 0;
    printf("ingrese su cedula : \n");
    scanf("%d", &id);
    printf("el ultimo digito es  %d\n", id % 10);
    while (id > 0)
    {
        answer = div(id, 10);
        printf("los digitos son : %d %d\n",
               answer.quot,
               answer.rem);
        if (answer.rem % 2 == 0)
        {
            pares = pares + 1;
        }
        else
        {
            impares = impares + 1;
        }
        id = answer.quot;
    }

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);

    return 0;
}







       /* 
       
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main( int argc, char const *argv[]){
        
    int id , resultado , ultimo ,d;
    div_t  answer ;
    int pares = 0 ;
    int impares = 0 ;
    printf("ingrese su cedula : \n");
    scanf("%d",&id);
    printf("el ultimo digito es  %d\n",id % 10);
    while(id > 0){
         answer = div(id,10);
        printf("los digitos son : %d %d\n",
        answer.quot,
        answer.rem); 
        };
        if( d % 2 = 0){
            pares = pares + 1 ;         
        }else{
            impares : impares + 1;
        }    
        printf(pares);
   printf(impares);   
    };
        
    return 0 ;
    
}
        return 0 ;
       
       if( d % 2 = 0){
            pares = pares + 1 ;         
        }else{
            impares : impares + 1;
        }    
        printf(pares);
   printf(impares);   
    };
   */


    
