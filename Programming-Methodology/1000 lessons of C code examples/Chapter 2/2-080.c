/*Chương 2 - Bài 80 - trang 16*/

#include <stdio.h>

int main()
{
	int i, n;
	float s, x, m, t;

	scanf("%f", &x);
	scanf("%d", &n);

	s = 0;
	t = 1;
	i = 1;
	m = 0;

	while (i <= n)
	{
		m = m + i;
		t = t * x;
		s = s + t / m;
		i = i + 1;
	}
	printf("%f", s);
}
