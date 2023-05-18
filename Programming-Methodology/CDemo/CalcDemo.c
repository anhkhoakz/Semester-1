#include <stdio.h>
#include <math.h>

float calcA(int n);
float calcB(int n);
float calcC(int n);
float calcD(int n);
float calcF(int n);

int main(void)
{
	// khai bao bien
	int n;
	float result;

	// nhap vao n cho den khi n >= 0
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);

		if (n < 0)
		{
			printf("Nhap vao n > 0 \n");
		}
	} while (n <= 0);

	// tinh bieu thuc
	result = calcF(n);

	// in ket qua
	printf("Ket qua %f", result);
}

// precond: n >= 0
float calcA(int n)
{
	float result = 0;
	int i;

	for (i = 1; i <= n; i++)
	{
		result = result + (i + 1) / sqrt(i);
	}

	return result;
}

float calcF(int n)
{
	float result = 0;
	int i;

	for (i = 1; i <= n; i++)
	{
		result = result + pow(-1, i) / i;
	}

	return result;
}
