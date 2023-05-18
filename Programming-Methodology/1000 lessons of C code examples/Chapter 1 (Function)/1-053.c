/*Chương 1 - Bài 53 - trang 9*/

#include <stdio.h>

int MaxCharN(int n);
int Func53(int n);

int main()
{
	int n = 828738;

	printf("n = %d \n", n);
	printf("Chu so lon nhat cua n la: %d \n", MaxCharN(n));
	printf("Chu so lon nhat cua n lap lai %d lan. \n", Func53(n));
}

int MaxCharN(int n)
{
	int max = -1;
	int t = n;
	int r = 0;

	while (t > 0)
	{
		r = t % 10;
		if (max < r)
		{
			max = r;
		}
		t = t / 10;
	}
	return max;
}

int Func53(int n)
{
	int count = 0;
	int max = -1;
	int t = n;
	int r = 0;

	while (t > 0)
	{
		r = t % 10;
		if (max < r)
		{
			max = r;
		}
		t = t / 10;
	}
	t = n;
	while (t > 0)
	{
		r = t % 10;
		if (max == r)
		{
			++count;
		}
		t = t / 10;
	}
	return count;
}
