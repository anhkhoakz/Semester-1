/*Chương 1 - Bài 47 - trang 8*/

#include <stdio.h>

int NumberCharCount(int n); // Hàm đếm số lượng chữ số của n
void ListEventCharN(int n); // Hàm liệt kê các chữ số chẵn của n
int Func47(int n);

int main()
{
	int n = 123456789;

	printf("n = %d \n", n);
	printf("n co %d chu so. \n", NumberCharCount(n));
	ListEventCharN(n);
	printf("\n");
	printf("Tong cac chu so chan cua n: %d \n", Func47(n));
}

int NumberCharCount(int n)
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

void ListEventCharN(int n)
{
	int t = n;
	int r = 0;
	printf("Cac chu so le cua n: ");
	while (t > 0)
	{
		r = t % 10;
		if (r % 2 == 0)
		{
			printf("%d ", r);
		}
		t = t / 10;
	}
}

int Func47(int n)
{
	int s = 0;
	int t = n;
	int r = 0;
	while (t > 0)
	{
		r = t % 10;
		if (r % 2 == 0)
		{
			s += r;
		}
		t = t / 10;
	}
	return s;
}
