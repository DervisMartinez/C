/*
    Variables
*/

#include <stdio.h>
int main()
{
    char C = 'Y'; // tamaño 1 byte 0...255  Char /Charcter/ (Caracter) para agregar letras
    int a = 20 ; // 2 bytes  -32768 ... 32767
    short e =-1 ; // entero corto  2bytes  -128...127
    unsigned int u = 20; // 2 bytes 
    long l = 5932 ; // entero largo /li 4 bytes -2147483648 
    float f = 72.534 ;// Real , Decimal ( limitar decimales %.2f\n) 4bytes
    double d = 12323.8888888 ; // 8bytes (%f\n, d)
    
    printf("%c\n", C);
    return 0 ;
}