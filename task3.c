#include <stdio.h>
#include <limits.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		int n;
	
		printf("������� ������ �������: ");
		scanf("%d", &n);

		int *mas = (int *)malloc(n * sizeof(int));

		printf("������� �������� �������: \n");
		for(int i = 0; i < n; i++) {
			scanf("%d", &mas[i]);
		}
		printf("������ = ");
		
		getchar();

		for(int i = 0; i < n; i++) {
			printf("%d ", mas[i]);
		}

		printf("\n");
		getchar();
		return 0;
} 