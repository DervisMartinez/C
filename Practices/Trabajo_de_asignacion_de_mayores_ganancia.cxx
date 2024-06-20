#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura para representar un trabajo
struct Job {
    int difficulty;
    int profit;
};

// Función de comparación para ordenar los trabajos por dificultad
int compareJobs(const void* a, const void* b) {
    return ((struct Job*)a)->difficulty - ((struct Job*)b)->difficulty;
}

int maxProfit(int* difficulty, int* profit, int difficultySize, int profitSize, int* worker, int workerSize) {
    // Crear una matriz de trabajos y llenarla con los valores de dificultad y beneficio
    struct Job* jobs = (struct Job*)malloc(sizeof(struct Job) * difficultySize);
    for (int i = 0; i < difficultySize; ++i) {
        jobs[i].difficulty = difficulty[i];
        jobs[i].profit = profit[i];
    }

    // Ordenar los trabajos por dificultad
    qsort(jobs, difficultySize, sizeof(struct Job), compareJobs);

    // Inicializar el beneficio total acumulado
    int totalProfit = 0;

    // Recorrer los trabajadores
    for (int i = 0; i < workerSize; ++i) {
        int workerCapacity = worker[i];
        int currentProfit = 0;

        // Buscar el trabajo más difícil que el trabajador pueda completar
        for (int j = 0; j < difficultySize; ++j) {
            if (jobs[j].difficulty <= workerCapacity) {
                currentProfit = jobs[j].profit;
            } else {
                break; // No se puede asignar trabajos más difíciles
            }
        }

        // Agregar el beneficio al total acumulado
        totalProfit += currentProfit;
    }

    // Liberar la memoria
    free(jobs);

    return totalProfit;
}

int main() {
    int difficulty[] = {2, 4, 6, 8, 10};
    int profit[] = {10, 20, 30, 40, 50};
    int worker[] = {4, 5, 6, 7};
    int difficultySize = sizeof(difficulty) / sizeof(difficulty[0]);
    int profitSize = sizeof(profit) / sizeof(profit[0]);
    int workerSize = sizeof(worker) / sizeof(worker[0]);

    int result = maxProfit(difficulty, profit, difficultySize, profitSize, worker, workerSize);
    printf("El beneficio máximo es: %d\n", result);

    return 0;
}