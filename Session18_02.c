#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	struct SinhVien{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct SinhVien sinhvien1;
	printf("Nhap ten sinh vien: ");
	fgets(sinhvien1.name, sizeof(sinhvien1.name), stdin);
	printf("Nhap so tuoi: ");
	scanf("%d", &sinhvien1.age);
	fflush(stdin);
	printf("Nhap SDT: ");
	fgets(sinhvien1.phoneNumber, sizeof(sinhvien1.phoneNumber), stdin);
	printf("Ten: %s\n", sinhvien1.name);
	printf("Tuoi: %d\n", sinhvien1.age);
	printf("SDT: %s\n", sinhvien1.phoneNumber);
    return 0;
}

