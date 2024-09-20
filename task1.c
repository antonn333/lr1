#include <stdio.h>
#include <limits.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{ 
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int mas[10] = {0};

	int max = mas[0];
	int min = mas[0];

	printf("Массив = ");

	for(int i = 0; i < 10; i++){
		mas[i] = i;
		printf("%d ", mas[i]);
	}

	for(int i = 0; i < 10; i++){
		if (mas[i] > max){
		max = mas[i];
		}
		if (mas[i] < min){
		min = mas[i];
		}
	}

	int raznost;
	raznost = max - min;
	printf("\nРазность = %d", raznost);
	getchar();
	return 0;
} 