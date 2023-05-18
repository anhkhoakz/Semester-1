#include <stdio.h>
#include <math.h>

int isPerfectNumber(int);

void PerfectNumberList(int);

int isSquareNumber(int);

int SumSquareNumber(int);

int PerfectNumberCount(int);

int isArmstrong(int);

void ArmstrongList(int);

int isPalindrome(int);

void PalindromeNotification(int);

double calculate_sum_of_1perN(int);

long double factorial(int);

void multiplication_table(int);

int isDecreasing(int);

void decreasingNotification(int);

int isAllOddNumbers(int);

void allOddNumbersNotification(int);

int main()
{
	printf("Ten: Nguyen Huynh Anh Khoa\tMSSV: 522H0046\n\n");
	int n;
	do
	{
		printf("Nhap vao gia tri n: ");
		scanf("%d", &n);
		if (n <= 0 || n % 2 != 0)
		{
			printf("Vui long nhap vao mot so lon hon 0 va la so chan\n");
		}
	} while (n <= 0 || n % 2 != 0);
	printf("Cac so hoan thien tu 1 den %d: ", n);
	PerfectNumberList(n);
	printf("Tong cac so chinh phuong tu 1 den %d: %d\n", n, SumSquareNumber(n));
	printf("Co %d so hoan thien tu 1 den %d\n", PerfectNumberCount(n), n);
	printf("Cac so Armstrong tu %d den 10,000: ", n);
	ArmstrongList(n);
	PalindromeNotification(n);
	printf("Tong cua 1 + 1/2 + 1/3 + ... + 1/%d: %f\n", n, calculate_sum_of_1perN(n));
	printf("%d! co gia tri: %Lf\n", n, factorial(n));
	printf("Bang cuu chuong cua %d:\n", n);
	multiplication_table(n);
	decreasingNotification(n);
	allOddNumbersNotification(n);
	return 0;
}

int isPerfectNumber(int n)
{
	// A number is a perfect number if is equal to sum of its proper divisors, that is, sum of its positive divisors excluding the number itself
	//  1 is perfect; 0 is not
	int sum = 0;
	int i;
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
		if (sum == n)
		{
			return 1;
		}
	}
	return 0;
}

void PerfectNumberList(int n)
{
	// Liet ke cac so hoan thien 1 -> n
	int i;
	for (i = 1; i <= n; i++)
	{
		if (isPerfectNumber(i) == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

int isSquareNumber(int n)
{
	// Số chính phương hay còn gọi là số hình vuông là số tự nhiên có căn bậc hai là một số tự nhiên, hay nói cách khác, số chính phương bằng bình phương (lũy thừa bậc 2) của một số nguyên
	// 1 is Square; 0 is not
	int temp;
	temp = sqrt(n);
	if (n == pow(temp, 2))
	{
		return 1;
	}
	return 0;
}

int SumSquareNumber(int n)
{
	// Tong cac so chinh phuong tu 1 -> n
	int sum = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		if (isSquareNumber(i) == 1)
		{
			sum += i;
		}
	}
	return sum;
}

int PerfectNumberCount(int n)
{
	// Dem cac so hoan thien tu 1 -> n
	int count = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		if (isPerfectNumber(i) == 1)
		{
			count++;
		}
	}
	return count;
}

int isArmstrong(int n)
{
	// 1 is armstrong, 0 is not
	int temp = n;
	int digitNumber = log10(temp) + 1;
	int sum = 0;
	int remainder;
	while (temp != 0)
	{
		remainder = temp % 10;
		sum += pow(remainder, digitNumber);
		temp /= 10;
	}
	if (sum == n)
	{
		return 1;
	}
	return 0;
}

void ArmstrongList(int n)
{
	// Liet ke cac so Armstrong tu n -> 10.000
	int i;
	for (i = 10000; n <= i; n++)
		if (isArmstrong(n) == 1)
		{
			printf("%d ", n);
		}
	printf("\n");
}

int isPalindrome(int n)
{
	// palindrome: doc xuoi nguoc deu giong nhu nhau.
	// 1 is Palindrome; 0 is not
	int temp = n;
	int sum = 0;
	int remainder;
	while (temp != 0)
	{
		remainder = temp % 10;
		sum = (sum * 10) + remainder;
		temp /= 10;
	}
	if (sum == n)
	{
		return 1;
	}
	return 0;
}

void PalindromeNotification(int n)
{
	if (isPalindrome(n) == 1)
	{
		printf("%d la so Palidrome\n", n);
	}
	else
	{
		printf("%d khong la so Palidrome\n", n);
	}
}

double calculate_sum_of_1perN(int n)
{
	// tinh 1 + 1/2 + 1/3 + ... + 1/n
	double i;
	double sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += (1 / i);
	}
	return sum;
}

long double factorial(int n)
{
	// Tinh n!
	int i;
	double product = 1;
	for (i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}
void multiplication_table(int n)
{
	// In bang cuu chuong n
	int i;
	for (i = 1; i < 11; i++)
	{
		printf("%d x %d = %d\n", i, n, i * n);
	}
}

int isDecreasing(int n)
{
	// 1: n is decreasing ; 0: is not
	int temp = n;
	int lastDigit = n % 10;
	temp /= 10;
	while (temp != 0)
	{
		int nextLastDigit = temp % 10;
		temp /= 10;
		if (lastDigit > nextLastDigit)
		{
			return 0;
		}
		else
		{
			lastDigit = nextLastDigit;
		}
	}
	return 1;
}

void decreasingNotification(int n)
{
	// thong bao n co giam dan hay khong
	if (isDecreasing(n) == 1)
	{
		printf("%d dang giam dan tu trai sang phai\n", n);
	}
	else
	{
		printf("%d khong giam dan tu trai sang phai\n", n);
	}
}

int isAllOddNumbers(int n)
{
	// 1: toan le; 0: khong
	int remainder;
	while (n != 0)
	{
		remainder = n % 10;
		if (remainder % 2 == 0)
		{
			return 0;
		}
		n /= 10;
	}
	return 1;
}

void allOddNumbersNotification(int n)
{
	// thong bao n co phai la so toan le hay khong
	if (isAllOddNumbers(n) == 1)
	{
		printf("%d la so toan le", n);
	}
	else
	{
		printf("%d khong la so toan le", n);
	}
}