#include <stdio.h>
#include <windows.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

#define MAX_STUDENTS 3
#define NAME_LENGTH 20

struct student {
    char famil[NAME_LENGTH];
    char name[NAME_LENGTH];
    char facult[NAME_LENGTH];
    int Nomzach;
};

// ������� ��� ������ ��������
void searchStudent(struct student stud[], int count, const char* famil, const char* name, const char* facult, int nomzach) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if ((strcmp(stud[i].famil, famil) == 0 || famil[0] == '\0') &&
            (strcmp(stud[i].name, name) == 0 || name[0] == '\0') &&
            (strcmp(stud[i].facult, facult) == 0 || facult[0] == '\0') &&
            (stud[i].Nomzach == nomzach || nomzach == -1)) {
            printf("������� ������: %s %s, ���������: %s, ����� �������� ������: %d\n",
                   stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
            found = 1;
        }
    }
    if (!found) {
        printf("������� �� ������ �� �������� ����������.\n");
    }
}

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    struct student stud[MAX_STUDENTS];

    // ���� ������ ���������
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("������� ������� ��������: ");
        scanf("%20s", stud[i].famil);
        printf("������� ��� �������� %s: ", stud[i].famil);
        scanf("%20s", stud[i].name);
        printf("������� �������� ���������� �������� %s %s: ", stud[i].famil, stud[i].name);
        scanf("%20s", stud[i].facult);
        printf("������� ����� �������� ������ �������� %s %s: ", stud[i].famil, stud[i].name);
        scanf("%d", &stud[i].Nomzach);
    }

    // ����� ���� ���������
    printf("\n������ ���������:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("������� %s %s ��������� �� ���������� %s, ����� �������� ������ %d\n",
               stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
    }

    // ����� ��������
    char searchFamil[NAME_LENGTH];
    char searchName[NAME_LENGTH];
    char searchFacult[NAME_LENGTH];
    int searchNomzach;

    printf("\n������� ������� �������� ��� ������ (��� �������� ������ ��� �������������): ");
    scanf("%20s", searchFamil);
    printf("������� ��� �������� ��� ������ (��� �������� ������ ��� �������������): ");
    scanf("%20s", searchName);
    printf("������� ��������� ��� ������ (��� �������� ������ ��� �������������): ");
    scanf("%20s", searchFacult);
    printf("������� ����� �������� ������ ��� ������ (��� ������� -1 ��� �������������): ");
    scanf("%d", &searchNomzach);

    searchStudent(stud, MAX_STUDENTS, searchFamil, searchName, searchFacult, searchNomzach);
	getchar();
    return 0;
}