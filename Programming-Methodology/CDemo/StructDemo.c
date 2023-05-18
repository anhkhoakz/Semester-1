// preprocessor - diractive
#include <stdio.h>
#include <string.h>

typedef struct
{
	int ngay;
	int thang;
	int nam;
} ngay_t;

typedef struct
{
	char maso[15];
	char ten[102];
	ngay_t ngay_sinh;
	double diem_trung_binh;
} sinhvien_t;

// function prototype
sinhvien_t input_sinh_vien(void);
void print_sinh_vien(sinhvien_t);
int inputString(char[], int);

// main function
int main(void)
{
	sinhvien_t sv2 = input_sinh_vien();
	printf("\n");
	print_sinh_vien(sv2);

	return 0;
}

// function definition
sinhvien_t input_sinh_vien()
{
	sinhvien_t sv1;

	printf("Nhap vao mssv (8 ky tu): ");
	inputString(sv1.maso, 15);

	printf("Nhap vao ten (toi da 100 ky tu):");
	inputString(sv1.ten, 102);

	printf("Nhap vao ngay sinh (d m yyyy): ");
	scanf("%d %d %d",
		  &sv1.ngay_sinh.ngay,
		  &sv1.ngay_sinh.thang,
		  &sv1.ngay_sinh.nam);

	printf("Nhap vao diem trung binh: ");
	scanf("%lf", &sv1.diem_trung_binh);

	return sv1;
}

void print_sinh_vien(sinhvien_t sv)
{
	printf("Sinh vien: %s\t%s\t%d/%d/%d\t%2.1f",
		   sv.maso,
		   sv.ten,
		   sv.ngay_sinh.ngay, sv.ngay_sinh.thang, sv.ngay_sinh.nam,
		   sv.diem_trung_binh);
}

int inputString(char str[], int size)
{
	int length;
	fgets(str, size, stdin);
	// delete '\n' character
	length = strlen(str);
	if (str[length - 1] == '\n')
	{
		str[length - 1] = '\0';
	}

	return strlen(str);
}
