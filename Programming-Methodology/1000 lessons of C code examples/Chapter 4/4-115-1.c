/*Chương 4 - Bài 115 - trang 42*/

#include <stdio.h>

char hoten[31];
int toan;
int van;
float dtb;

void Nhap();
void Xuly();
void Xuat();

int main()
{
	Nhap();
	Xuly();
	Xuat();
}

void Nhap()
{
	printf("Nhap ho ten: ");
	fflush(stdout);
	gets(hoten);
	printf("Nhap diem toan: ");
	fflush(stdout);
	scanf("%d", &toan);
	printf("Nhap diem van: ");
	fflush(stdout);
	scanf("%d", &van);
}

void Xuly()
{
	dtb = (toan + van) / 2;
}

void Xuat()
{
	printf("Diem trung binh: %2f \n", dtb);
}
