// Tinh tong cac so tu 1 toi n
#include <stdio.h>
int main()
{
	int i, n, sum = 0;
	printf("Ho va ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	printf("Vui long nhap vao 1 so:\n");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	printf("Tong cac so tu nhien tu 1 toi %d: %d", n, sum);
	return 0;
}
