/*Chương 1 - Bài 7 - trang 5*/

#include <stdio.h>

float Func7(int n);

int main()
{
	int n = 3;
	float s = 0;

	s = Func7(n);
	printf("result = %f \n", s);
}

float Func7(int n)
{
	float r = 0;
	for (float i = 0; i < n; ++i)
	{
		r += (i + 1.0) / (i + 1.0 + 1.0);
	}
	return r;
}
