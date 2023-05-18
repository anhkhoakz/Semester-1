/*Chương 3 - Bài 106 - trang 39*/

#include <stdio.h>
#include <string.h>

void Func106(int n, char str[]);
void SingleNumberPronounce(int n, char str[]);

int main()
{
	int n = 0;
	char str[128];

	printf("Nhap n: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n < 100 || n > 999)
	{
		printf("Nhap so  nguyen co chu so. \n");
	}
	else
	{
		Func106(n, str);
		printf("%s", str);
	}
}

void Func106(int n, char str[])
{
	int c = n % 10;
	int b = (n / 10) % 10;
	int a = n / 100;
	char tmp[64] = "";

	// a: hàng trăm
	if (a == 0)
	{
		strcpy(tmp, "");
	}
	else
	{
		SingleNumberPronounce(a, tmp);
		strcat(tmp, " trăm");
	}
	strcat(str, tmp);
	strcat(str, " "); // Thêm khoảng trắng
	strcpy(tmp, "");  // clear tmp
	// b: hàng chục
	if (b == 0)
	{
		if (c == 0)
		{
			strcpy(tmp, "");
		}
		else
		{
			strcpy(tmp, "Lẻ");
		}
	}
	else if (b == 1)
	{
		strcpy(tmp, " Mười");
	}
	else
	{
		SingleNumberPronounce(b, tmp);
		strcat(tmp, " mươi");
	}
	strcat(str, tmp);
	strcat(str, " "); // Thêm khoảng trắng
	strcpy(tmp, "");  // clear tmp
	// c: Hàng đơn vị
	if (c == 5)
	{
		if (b == 0)
		{
			SingleNumberPronounce(c, tmp);
		}
		else
		{
			strcpy(tmp, "Lăm");
		}
	}
	else if (c == 1)
	{
		if (b == 0 || b == 1)
		{
			SingleNumberPronounce(c, tmp);
		}
		else
		{
			strcpy(tmp, "Mốt");
		}
	}
	else if (c == 0)
	{
		strcpy(tmp, "");
	}
	else
	{
		SingleNumberPronounce(c, tmp);
	}
	strcat(str, tmp);
	strcat(str, " "); // Thêm khoảng trắng
}

void SingleNumberPronounce(int n, char str[])
{
	switch (n)
	{
	case 1:
		strcpy(str, "Một");
		break;
	case 2:
		strcpy(str, "Hai");
		break;
	case 3:
		strcpy(str, "Ba");
		break;
	case 4:
		strcpy(str, "Bốn");
		break;
	case 5:
		strcpy(str, "Năm");
		break;
	case 6:
		strcpy(str, "Sáu");
		break;
	case 7:
		strcpy(str, "Bảy");
		break;
	case 8:
		strcpy(str, "Tám");
		break;
	case 9:
		strcpy(str, "Chín");
		break;
	}
}
