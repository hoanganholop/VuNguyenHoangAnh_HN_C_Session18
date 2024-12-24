#include <stdio.h>
#include <string.h>

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

    int searchId;
    printf("Nhap ma sinh vien can tim: ");
    scanf("%d", &searchId);
	fflush(stdin); 
    int found = 0;
    int i; 
    for (i = 0; i < length; ++i) {
        if (students[i].id == searchId) {
            found = 1;
            printf("Nhap ten moi: ");
            fgets(students[i].name, 50, stdin);
            students[i].name[strcspn(students[i].name,"\n")] = '\0';
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay ID %d trong danh sach.\n", searchId);
    }

    printf("Danh sách sinh vien sau khi cap nhat:\n");
    printStudents(students, length);

    return 0;
}
void printStudents(Student students[], int length) {
	int i; 
    for ( i = 0; i < length; ++i) {
        printf("ID: %d, Name: %s, Age: %d, Phone Number: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
