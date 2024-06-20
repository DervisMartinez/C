#include <stdio.h>

int fibonacci_inverso(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci_inverso(n - 1) + fibonacci_inverso(n - 2);
    }
}

int main() {
    int n, res;

    printf("Escriba el numero para realizar el fibonacci inverso: \n");
    scanf("%d", &n);
    res = fibonacci_inverso(n);
    printf("El resultado es: %d\n", res);

    return 0;
}
