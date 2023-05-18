/*Chương 1 - Bài 55 - trang 9*/

#include <stdio.h>

int FirstCharN(int n);
int Func55(int n);

int main()
{
	int n = 525157;

	printf("n = %d \n", n);
	printf("Chu so dau tien cua n la: %d \n", FirstCharN(n));
	printf("Chu so dau tien cua n lap lai %d lan. \n", Func55(n));
}

int FirstCharN(int n)
{
	int first = -1;
	int t = n;

	while (t > 0)
	{
		if (t < 10)
		{
			first = t;
			break;
		}
		t = t / 10;
	}
	return first;
}

int Func55(int n)
{
	int count = 0;
	int first = -1;
	int t = n;
	while (t > 0)
	{
		if (t < 10)
		{
			first = t;
			break;
		}
		t = t / 10;
	}
	t = n;
	while (t > 0)
	{
		int r = t % 10;
		if (first == r)
		{
			++count;
		}
		t = t / 10;
	}
	return count;
}
