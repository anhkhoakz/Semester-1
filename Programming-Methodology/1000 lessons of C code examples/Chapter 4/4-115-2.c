/*Chương 4 - Bài 115 - trang 42*/

#include <stdio.h>

void Nhap(char ht[], int *t, int *v);
void Xuly(int t, int v, float *dtb);
void Xuat(char ht[], int t, int v, float dtb);

int main()
{
	char hoten[31];
	int toan;
	int van;
	float dtb;

	Nhap(hoten, &toan, &van);
	Xuly(toan, van, &dtb);
	Xuat(hoten, toan, van, dtb);
}

void Nhap(char ht[], int *t, int *v)
{
	printf("Nhap ho ten: ");
	fflush(stdout);
	gets(ht);
	printf("Nhap diem toan: ");
	fflush(stdout);
	scanf("%d", t);
	printf("Nhap diem van: ");
	fflush(stdout);
	scanf("%d", v);
}

void Xuly(int t, int v, float *dtb)
{
	*dtb = (t + v) / 2;
}

void Xuat(char ht[], int t, int v, float dtb)
{
	printf("Ho ten: %s \n", ht);
	printf("Toan: %d \n", t);
	printf("Van: %d \n", v);
	printf("Diem trung binh: %2f \n", dtb);
}
