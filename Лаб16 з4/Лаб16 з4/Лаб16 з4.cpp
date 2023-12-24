#include <stdio.h>
#include <stdlib.h>

int main() {
    // Введеня розмірів масиву MxN
    int M, N;
    printf("enter the number of rows (M): ");
    scanf_s("%d", &M);
    printf("enter the number of columns (N): ");
    scanf_s("%d", &N);

    // Створення динамічного масиву та виділення памяті
    int** matrix = (int**)malloc(M * sizeof(int*));
    for (int i = 0; i < M; i++) {
        matrix[i] = (int*)malloc(N * sizeof(int));
    }

    // Заповнення матриці
    int
        value = 0;
    for (int i = 0; i < M; i++) {
        if (i % 2 == 0) {
            // якщо парний рядок то рухаємо вправо
            for (int j = 0; j < N; j++) {
                matrix[i][j] = value++;
            }
        }
        else {
            // якщо непарний то рухаємось вліво, 
            // задаємо значення  int j = N - 1 щоб перший заповненим елементом був самий правий елемент рядку
            for (int j = N - 1; j >= 0; j--) {
                matrix[i][j] = value++;
            }
        }
    }

    // Виведення матриці
    printf("matrix filling:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Звільнюємо память
    for (int i = 0; i < M; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}