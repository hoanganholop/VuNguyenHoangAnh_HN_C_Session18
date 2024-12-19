#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	struct SinhVien{
		char name[50];
		int age;
		long long phoneNumber;
	};
	struct SinhVien sinhvien1={
		"Vu Nguyen Hoang Anh",
		19,
		84123456789,
	};
	printf("Ten: %s\n", sinhvien1.name);
	printf("Tuoi: %d\n", sinhvien1.age);
	printf("SDT: %lld\n", sinhvien1.phoneNumber);
    return 0;
}

