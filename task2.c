#include <stdio.h>
#include <limits.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS	

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int mas[10] = {0};
	srand(time(NULL));

	printf("Массив = ");

	for(int i = 0; i < 10; i++) {
		mas[i] = rand() % 100;
		printf("%d ", mas[i]);
	}

	getchar();
	return 0;
} 