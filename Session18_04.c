#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
	struct Student{
	int  id; 
    char name[50];
    int age;
    char phoneNumber[20];
	};
    struct Student students[50];
    int i;
    for ( i=0; i<2; i++) {
        printf("Nhap thong tin cho sinh vien thu %d:\n", i+1);
        students[i].id = i+1;
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name,"\n")]='\0';
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        fflush(stdin);
        printf("SDT sinh vien: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
    }
    printf("\nThong tin sinh vien:\n");
    for ( i=0; i<2; i++) {
        printf("Sinh vien thu %d:\n", i+1);
        printf("ID sinh vien: %d\n",students[i].id);
		printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("SDT: %s\n", students[i].phoneNumber);
    }

    return 0;
}
