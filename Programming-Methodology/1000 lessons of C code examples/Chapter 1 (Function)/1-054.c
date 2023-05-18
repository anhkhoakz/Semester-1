/*Chương 1 - Bài 54 - trang 9*/

#include <stdio.h>

int MinCharN(int n);
int Func54(int n);

int main()
{
	int n = 121701;

	printf("n = %d \n", n);
	printf("Chu so nho nhat cua n la: %d \n", MinCharN(n));
	printf("Chu so nho nhat cua n lap lai %d lan. \n", Func54(n));
}

int MinCharN(int n)
{
	int min = 10;
	int t = n;
	int r = 0;

	while (t > 0)
	{
		r = t % 10;
		if (min > r)
		{
			min = r;
		}
		t = t / 10;
	}
	return min;
}

int Func54(int n)
{
	int count = 0;
	int min = 10;
	int t = n;
	int r = 0;

	while (t > 0)
	{
		r = t % 10;
		if (min > r)
		{
			min = r;
		}
		t = t / 10;
	}
	t = n;
	while (t > 0)
	{
		r = t % 10;
		if (min == r)
		{
			++count;
		}
		t = t / 10;
	}
	return count;
}
