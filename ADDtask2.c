#include <stdio.h>
#include <limits.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int mas[10] = { 0 };
	int sum = 0;
	int min = -100;
	int max = 100;
	srand(time(NULL));

	printf("Массив = ");

	for (int i = 0; i < 10; i++) {
		mas[i] = min + rand() % (max - min + 1);
		printf("%d ", mas[i]);
		sum += mas[i]; // Суммирование чисел
	}

	printf("\nСумма всех чисел = %d\n", sum);

	getchar();
	return 0;
}