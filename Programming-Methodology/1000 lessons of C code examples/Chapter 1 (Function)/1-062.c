/*Chương 1 - Bài 62 - trang 10*/

#include <stdio.h>

int Func62(int a, int b);

int main()
{
	int a = 24;
	int b = 12;
	int ucln = 0;

	printf("a = %d \n", a);
	printf("b = %d \n", b);
	ucln = Func62(a, b);
	if (ucln > 0)
	{
		printf("UCLN cua a va b la: %d \n", ucln);
	}
	else if (ucln == -1)
	{
		printf("a va b khong co UCLN \n");
	}
}

int Func62(int a, int b)
{
	int ucln = 0;
	int small = 0;
	if (a == 0 && b == 0)
	{ // a và b đều bằng 0 thì chúng không có ƯCLN
		return -1;
	}
	else if (a == 0 && b > 0)
	{ // một trong hai số a hoặc b bằng 0, số kia khác 0 thì ƯCLN của chúng bằng giá trị tuyệt đối của số khác 0.
		return b;
	}
	else if (b == 0 && a > 0)
	{
		return a;
	}
	else if (a % b == 0 || b % a == 0)
	{
		if (a > b)
			return b;
		else
			return a;
	}
	else
	{
		if (a > b)
		{
			small = b;
		}
		else
		{
			small = a;
		}
		for (int i = small / 2; i > 0; --i)
		{
			if (a % i == 0 && b % i == 0)
			{
				return i;
			}
		}
	}
	return ucln;
}
