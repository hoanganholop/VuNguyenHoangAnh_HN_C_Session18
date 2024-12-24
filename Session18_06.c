#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

void printStudents(Student students[], int length);

int main() {
    Student students[50] = {
        {1, "Hoang Anh", 20, "0192388723"},
        {2, "Phuong Cuc", 21, "823710847142"},
        {3, "Huyen Anh", 22, "287307340"},
        {4, "Thanh Huyen", 23, "09384107248"},
        {5, "Thanh Vu", 24, "0183714782"}
    };
    int length = 5;

    Student newStudent;
    printf("Nhap ID: ");
    scanf("%d", &newStudent.id);
    fflush(stdin); 
    printf("Nhap ten sinh vien: ");
    fgets(newStudent.name, 50, stdin);
    newStudent.name[strcspn(newStudent.name,"\n")] = '\0';
	printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    fflush(stdin); 
    printf("Nhap so dien thoai sinh vien: ");
    fgets(newStudent.phoneNumber, 15, stdin);

    if (length < 50) {
        students[length] = newStudent;
        length++;
    } else {
        printf("Danh sach sinh vien da day.\n");
    }

    printf("Danh sach sau khi them:\n");
    printStudents(students, length);

    return 0;
}
void printStudents(Student students[], int length) {
	int i; 
    for ( i = 0; i < length; ++i) {
        printf("ID: %d, Name: %s, Age: %d, Phone Number: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
