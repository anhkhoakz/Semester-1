/*Chương 1 - Bài 5 - trang 4*/

#include <stdio.h>

float Func5(int n);

int main()
{
	int n = 3;
	float s = 0;

	s = Func5(n);
	printf("result = %f \n", s);
}

float Func5(int n)
{
	float r = 1;
	for (float i = 0; i < n - 1; ++i)
	{
		r += 1.0 / (2 * (i + 1.0) + 1);
	}
	return r;
}
