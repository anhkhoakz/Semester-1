/*Chương 3 - Bài 105 - trang 39*/

#include <stdio.h>
#include <string.h>

void Func105(int n, char str[]);

int main()
{
	int n = 0;
	char str[128] = "";

	printf("Nhap n: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n < 10 || n > 99)
	{
		printf("Nhap so  nguyen co 2 chu so. \n");
	}
	else
	{
		Func105(n, str);
		printf("%s", str);
	}
}

void Func105(int n, char str[])
{
	int b = n % 10;
	int a = n / 10;
	switch (a)
	{
	case 1:
		strcpy(str, "Mười");
		break;
	case 2:
		strcpy(str, "Hai mươi");
		break;
	case 3:
		strcpy(str, "Ba mươi");
		break;
	case 4:
		strcpy(str, "Bốn mươi");
		break;
	case 5:
		strcpy(str, "Năm mươi");
		break;
	case 6:
		strcpy(str, "Sáu mươi");
		break;
	case 7:
		strcpy(str, "Bảy mươi");
		break;
	case 8:
		strcpy(str, "Tám mươi");
		break;
	case 9:
		strcpy(str, "Chín mươi");
		break;
	}
	switch (b)
	{
	case 1:
		strcat(str, " Mốt");
		break;
	case 2:
		strcat(str, " Hai");
		break;
	case 3:
		strcat(str, " Ba");
		break;
	case 4:
		strcat(str, " Bốn ");
		break;
	case 5:
		strcat(str, " Lăm");
		break;
	case 6:
		strcat(str, " Sáu");
		break;
	case 7:
		strcat(str, " Bảy");
		break;
	case 8:
		strcat(str, " Tám");
		break;
	case 9:
		strcat(str, " Chín");
		break;
	}
}
