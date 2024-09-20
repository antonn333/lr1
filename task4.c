#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int arr[3][4] = {
        {10, -3, 2, 5},
        {5, 3, -7, 8},
        {12, 4, 11, 15}
    };


    printf("Массив:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    // Сумма по строкам
    printf("\nСуммы по строкам:\n");
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 4; j++) {
            rowSum += arr[i][j];
        }
        printf("Сумма строки %d: %d\n", i + 1, rowSum);
    }

    // Сумма по столбцам
    printf("\nСуммы по столбцам:\n");
    for (int j = 0; j < 4; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }
        printf("Сумма столбца %d: %d\n", j + 1, colSum);
    }
    getchar();
    return 0;
}

