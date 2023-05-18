/*Chương 1 - Bài 49 - trang 8*/

#include <stdio.h>

void ListCharN(int n); // Hàm liệt kê các chữ số của n
int Func49(int n);

int main()
{
	int n = 1090;

	ListCharN(n);
	printf("\n");
	printf("So dau tien cua n la: %d \n", Func49(n));
}

void ListCharN(int n)
{
	int t = n;
	printf("Cac chu so cua n: ");
	while (t > 0)
	{
		printf("%d ", t % 10);
		t = t / 10;
	}
}

int Func49(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		int t = n;
		while (1)
		{
			t = t / 10;
			if (t < 10)
			{
				return t;
			}
		}
	}
}
