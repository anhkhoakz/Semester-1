/*Chương 1 - Bài 8 - trang 5*/

#include <stdio.h>

float Func8(int n);

int main()
{
	int n = 3;
	float s = 0;

	s = Func8(n);
	printf("result = %f \n", s);
}

float Func8(int n)
{
	float r = 0.5;
	for (float i = 0; i < n - 1; ++i)
	{
		r += (2 * (i + 1.0) + 1.0) / (2 * (i + 1.0) + 2.0);
	}
	return r;
}
