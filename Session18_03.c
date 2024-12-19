#include <stdio.h>

int main() {
	struct Student{
    char name[50];
    int age;
    char phoneNumber[20];
	};
    struct Student students[5];
    int i;
    for ( i = 0; i < 5; i++) {
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        fflush(stdin);
        printf("SDT sinh vien: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
    }
    printf("\nThong tin sinh vien:\n");
    for ( i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("SDT: %s\n", students[i].phoneNumber);
    }

    return 0;
}
