/*Chương 1 - Bài 45 - trang 8*/

#include <stdio.h>

int NumberCharCount(int n); // Hàm đếm số lượng chữ số của n
int Func45(int n);

int main()
{
	int n = 12345;

	printf("n = %d \n", n);
	printf("n co %d chu so. \n", NumberCharCount(n));
	printf("Tich cac chu so cua n: %d \n", Func45(n));
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

int Func45(int n)
{
	int s = 1;
	int t = n;
	while (t > 0)
	{
		s *= t % 10;
		t = t / 10;
	}
	return s;
}
