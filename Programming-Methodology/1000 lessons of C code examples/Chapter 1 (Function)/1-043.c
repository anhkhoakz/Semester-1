/*Chương 1 - Bài 43 - trang 8*/

#include <stdio.h>

int Func43(int n);
int Func43_1(int n);

int main()
{
	int n = 12300;

	printf("n = %d \n", n);
	printf("n co %d chu so. \n", Func43_1(n));
}

int Func43(int n)
{
	int count = 0;
	int t = n;
	while (1)
	{
		++count;
		if (t >= 10)
		{
			t = t / 10;
		}
		else
		{
			break;
		}
	}
	return count;
}

int Func43_1(int n)
{
	int count = 0;
	int t = n;
	while (t > 0)
	{
		++count;
		t = t / 10;
	}
	return count;
}
