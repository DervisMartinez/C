#include <stdio.h>

double formula(int N) {
    double sum = 0.0;
    for(int i = 1; i <= N; i++) {
        double product = 1.0;
        for(int j = 1; j <= i; j++) {
            product *= (2*j + i) / (double)N;
        }
        sum += product;
    }
    return sum;
}

int main() {
    int N;
    printf("Introduce un número entero positivo N: ");
    scanf("%d", &N);

    double result = formula(N);
    printf("El resultado es %.2f\n", result);

    return 0;
}
