#include <stdio.h>
#include <locale.h>
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
		getchar();
    }
}

int main(void) {
    setlocale(LC_ALL, "Rus");
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    struct student stud[MAX_STUDENTS];

    // ���� ������ ���������
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("������� ������� ��������: ");
        fgets(stud[i].famil, NAME_LENGTH, stdin);
        stud[i].famil[strcspn(stud[i].famil, "\n")] = '\0';
        printf("������� ��� �������� %s: ", stud[i].famil);
        fgets(stud[i].name, NAME_LENGTH, stdin);
        stud[i].name[strcspn(stud[i].name, "\n")] = '\0';
        printf("������� �������� ���������� �������� %s %s: ", stud[i].famil, stud[i].name);
        fgets(stud[i].facult, NAME_LENGTH, stdin);
        stud[i].facult[strcspn(stud[i].facult, "\n")] = '\0';
        printf("������� ����� �������� ������ �������� %s %s: ", stud[i].famil, stud[i].name);
        scanf("%d", &stud[i].Nomzach);
        getchar();
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
    fgets(searchFamil, NAME_LENGTH, stdin);
    searchFamil[strcspn(searchFamil, "\n")] = '\0'; // �������� ������� ����� ������
    printf("������� ��� �������� ��� ������ (��� �������� ������ ��� �������������): ");
    fgets(searchName, NAME_LENGTH, stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // �������� ������� ����� ������
    printf("������� ��������� ��� ������ (��� �������� ������ ��� �������������): ");
    fgets(searchFacult, NAME_LENGTH, stdin);
    searchFacult[strcspn(searchFacult, "\n")] = '\0'; // �������� ������� ����� ������
    printf("������� ����� �������� ������ ��� ������ (��� ������� -1 ��� �������������): ");
    scanf("%d", &searchNomzach);
    getchar();

    searchStudent(stud, MAX_STUDENTS, searchFamil, searchName, searchFacult, searchNomzach);

	getchar();
    return 0;
}