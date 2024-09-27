#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows, cols;

    printf("������� ���������� ����� �������: ");
    scanf("%d", &rows);
    printf("������� ���������� �������� �������: ");
    scanf("%d", &cols);

    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("������� �������� �������: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

	printf("������:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    // ����� �� �������
    printf("\n����� �� �������:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("����� ������ %d: %d\n", i + 1, rowSum);
    }
	getchar();

    // ����� �� ��������
    printf("\n����� �� ��������:\n");
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("����� ������� %d: %d\n", j + 1, colSum);
    }

	// ����������� ������
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

	getchar();
    return 0;
}
