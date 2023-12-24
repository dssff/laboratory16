#include <stdio.h>



int main() {
    // Ініціалізація матриці
    int matrix[4][4] = {
        {0, -65, -32, -12},
        {56, 6, 6, 55},
        {-33, -11, 141, -162},
        {4, -7, 12, 556}
    };


    for (int i = 0; i < 4; i++) { //проходимо по кожному рядку
        int positive = 0;

        for (int j = 0; j < 4; j++) { //проходимо по кожному стовпцю в рядку який зараз обробляє цикл
            if (matrix[i][j] > 0) {
                positive = positive + 1;
            }
        }

        printf("There are %d positive elements in row %d\n", i + 1, positive);
    }

    return 0;
}