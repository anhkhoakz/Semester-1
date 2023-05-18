/*Chương 1 - Bài 63 - trang 10*/

#include <stdio.h>

int Func63(int a, int b);

int main()
{
	int a = 0;
	int b = 0;
	int bcnn = 0;

	printf("a = %d \n", a);
	printf("b = %d \n", b);
	bcnn = Func63(a, b);
	printf("BCNN cua a va b la: %d \n", bcnn);
}

int Func63(int a, int b)
{
	int bcnn = 0;
	int big = 0;

	if (a == 0 || b == 0)
	{
		return 0;
	}
	else if (a % b == 0 || b % a == 0)
	{
		if (a > b)
			return a;
		else
			return b;
	}
	else
	{
		if (a > b)
		{
			big = a;
		}
		else
		{
			big = b;
		}
		for (int i = big + 1; i <= a * b; ++i)
		{
			if (i % a == 0 && i % b == 0)
			{
				return i;
			}
		}
	}
	return bcnn;
}
