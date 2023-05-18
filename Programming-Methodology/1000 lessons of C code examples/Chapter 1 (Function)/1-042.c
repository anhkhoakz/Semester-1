/*Chương 1 - Bài 42 - trang 8*/

#include <stdio.h>

int Sumk(int k); // Hàm tính tổng từ 1 -> k
int Func42(int n);

int main()
{
	int n = 106;
	int k = 0;

	printf("n = %d \n", n);
	k = Func42(n);
	printf("k = %d \n", k);
	printf("S(k) = %d \n", Sumk(k));
	printf("S(k + 1) = %d \n", Sumk(k + 1));
}

int Sumk(int k)
{
	int s = 0;
	for (int i = 0; i < k; ++i)
	{
		s += i + 1;
	}
	return s;
}

int Func42(int n)
{
	int k = -1;
	if (n == 0)
	{
		k = 0;
		return k;
	}
	else
	{
		int s = 0;
		for (int i = 0; i < n; ++i)
		{
			s += i + 1;
			if (s >= n)
			{
				k = i; // Lấy giá trị vòng lặp trước đó
				break;
			}
		}
	}
	return k;
}
