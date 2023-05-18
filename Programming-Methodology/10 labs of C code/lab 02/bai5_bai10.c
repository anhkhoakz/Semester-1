#include <stdio.h>
#include <math.h>

int firstDigit(int);
int lastDigit(int);
int sumOfDigit(int);
long long productOfDigit(int);
int numberOfDigit(int);
int swapfirstnlastDigit(int);
int reversedNumber(int);

int main()
{
    printf("Ho va ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
    int n;
    printf("Nhap vao 1 so bat ky:\n");
    scanf("%d", &n);
    printf("Ky tu dau tien: %d\n", firstDigit(n));                      // Cau 5
    printf("Ky tu cuoi cung: %d\n", lastDigit(n));                      // Cau 5
    printf("Tong cac ky tu: %d\n", sumOfDigit(n));                      // Cau 6
    printf("Tich cac ky tu: %lld\n", productOfDigit(n));                // Cau 7
    printf("So luong cac ky tu: %d\n", numberOfDigit(n));               // Cau 8
    printf("Thay doi ky tu dau va cuoi: %d\n", swapfirstnlastDigit(n)); // Cau 9*
    printf("Dao nguoc ky tu: %d\n", reversedNumber(n));                 // Cau 10
    return 0;
}

int firstDigit(int n)
{
    // find first digit
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}

int lastDigit(int n)
{
    // find last digit
    return n % 10;
}

int sumOfDigit(int n)
{
    // calculate sum of all digits
    int sumDigit = 0, i;
    while (n > 0)
    {
        i = n % 10;
        sumDigit += i;
        n /= 10;
    }
    return sumDigit;
}

long long productOfDigit(int n)
{
    // calculate product of all digits
    int productDigit = 1, i;
    while (n > 0)
    {
        i = n % 10;
        productDigit *= i;
        n /= 10;
    }
    return productDigit;
}

int numberOfDigit(int n)
{
    // count number of digit in any number
    int numberOfDigit = 0, i;
    while (n > 0)
    {
        i = n % 10;
        numberOfDigit += 1;
        n /= 10;
    }
    return numberOfDigit;
}

int swapfirstnlastDigit(int n)
{
    // swap first and last number
    int firstDigit1, lastDigit1, digitsCount, a, b, swappedNumber;
    digitsCount = log10(n);
    firstDigit1 = firstDigit(n); // tim ky tu dau tien
    lastDigit1 = lastDigit(n);   // tim ky tu cuoi cung
    a = firstDigit1 * (pow(10, digitsCount));
    b = n % a;
    n = b / 10;
    swappedNumber = lastDigit1 * (pow(10, digitsCount)) + (n * 10 + firstDigit1);
    return swappedNumber;
}

int reversedNumber(int n)
{
    // reverse number
    int remainder, reversedNumber = 0;
    while (n != 0)
    {
        remainder = n % 10;                               // tinh so du
        reversedNumber = reversedNumber * 10 + remainder; // dao so
        n /= 10;
    }
    return reversedNumber;
}