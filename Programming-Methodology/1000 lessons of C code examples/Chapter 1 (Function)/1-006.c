/*Chương 1 - Bài 6 - trang 5*/

#include <stdio.h>

float Func6(int n);

int main()
{
	int n = 3;
	float s = 0;

	s = Func6(n);
	printf("result = %f \n", s);
}

float Func6(int n)
{
	float r = 0;
	for (float i = 0; i < n; ++i)
	{
		r += 1.0 / ((i + 1) * (i + 1.0 + 1.0));
	}
	return r;
}
