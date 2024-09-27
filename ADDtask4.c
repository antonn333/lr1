#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows, cols;

    printf("Введите количество строк массива: ");
    scanf("%d", &rows);
    printf("Введите количество столбцов массива: ");
    scanf("%d", &cols);

    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Введите элементы массива: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

	printf("Массив:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    // сумма по строкам
    printf("\nСуммы по строкам:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Сумма строки %d: %d\n", i + 1, rowSum);
    }
	getchar();

    // сумма по столбцам
    printf("\nСуммы по столбцам:\n");
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("Сумма столбца %d: %d\n", j + 1, colSum);
    }

	// освобождаем память
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

	getchar();
    return 0;
}
