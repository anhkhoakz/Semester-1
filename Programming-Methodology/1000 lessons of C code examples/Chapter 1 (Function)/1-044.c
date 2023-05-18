/*Chương 1 - Bài 44 - trang 8*/

#include <stdio.h>

int NumberCharCount(int n); // Hàm đếm số lượng chữ số của n
int Func44(int n);

int main()
{
	int n = 12040;

	printf("n = %d \n", n);
	printf("n co %d chu so. \n", NumberCharCount(n));
	printf("Tong cac chu so cua n: %d \n", Func44(n));
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

int Func44(int n)
{
	int s = 0;
	int t = n;
	while (t > 0)
	{
		s += t % 10;
		t = t / 10;
	}
	return s;
}
