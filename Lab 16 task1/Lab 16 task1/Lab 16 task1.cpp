#include <stdio.h>

int main() {

    int s[5][5] = {
        {21, 0, 205, 14, 5},
        {65, 17, 0, 0, 10 },
        {21, 12, 13, 0, 1502},
        {76, 0, 58, 0, 120 },
        {21, 22, 73, 66, 0}
    }; // Виведення матриці
    printf(" matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%4d ", s[i][j]); //записуємо 4а для задання ширини поля елемента, щоб вигляд матриці був більш читабельний
        }
        printf("\n");
    }


    for (int j = 0; j < 5; j++) {
        // Знаходження максимального елементу в стовпці

        int maxElement = s[0][j];
        for (int i = 1; i < 5; i++) {
            if (s[i][j] > maxElement) {
                maxElement = s[i][j];
            }
        }

        // Заміна елементів
        for (int i = 0; i < 5; i++) {
            if (s[i][j] == 0) {
                s[i][j] = maxElement;
            }
        }
    }

    // Виведення матриці з заміною 
    printf("update matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%4d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}