/*Chương 1 - Bài 46 - trang 8*/

#include <stdio.h>

int NumberCharCount(int n); // Hàm đếm số lượng chữ số của n
void ListOddCharN(int n);	// Hàm liệt kê các chữ số lẽ của n
int Func46(int n);

int main()
{
	int n = 123456789;

	printf("n = %d \n", n);
	printf("n co %d chu so. \n", NumberCharCount(n));
	ListOddCharN(n);
	printf("\n");
	printf("So luong cac chu so le cua n: %d \n", Func46(n));
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

void ListOddCharN(int n)
{
	int t = n;
	int r = 0;
	printf("Cac chu so le cua n: ");
	while (t > 0)
	{
		r = t % 10;
		if (r % 2 != 0)
		{
			printf("%d ", r);
		}
		t = t / 10;
	}
}

int Func46(int n)
{
	int count = 0;
	int t = n;
	int r = 0;
	while (t > 0)
	{
		r = t % 10;
		if (r % 2 != 0)
		{
			++count;
		}
		t = t / 10;
	}
	return count;
}
