/*Chương 1 - Bài 4 - trang 4*/

#include <stdio.h>

float Func4(int n);

int main()
{
	int n = 3;
	float s = 0;

	s = Func4(n);
	printf("result = %f \n", s);
}

float Func4(int n)
{
	float r = 0;
	for (float i = 0; i < n; ++i)
	{
		r += 1.0 / (2 * (i + 1.0));
	}
	return r;
}
