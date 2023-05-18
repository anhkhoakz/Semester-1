/*
1. Nhap xuat mang 1 chieu so nguyen gom n phan tu
2. Tong cac so chan
3. Dem cac so le
4. Kiem tra mang co ton tai so nguyen to
5. Tim trung binh cong cac so le
6. Mang co toan chan?
7. Mang co chan le xen ke?
8. Mang co tang dan
9. Nhap x, in ra cac gia tri -> x
10. Tim so lon nhat
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void input(int a[], int &n)
{
	// nhap n
	printf("Nhap so phan tu cho mang:");
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d:", i);
		scanf("%d", &a[i]);
	}
}
void random(int a[], int &n)
{
	// nhap n
	printf("Nhap so phan tu cho mang:");
	scanf("%d", &n);
	int i;
	//[minN,maxN]
	int minN = 5, maxN = 10;
	for (i = 0; i < n; i++)
	{
		// a[i]=rand()%10;
		a[i] = minN + rand() % (maxN + 1 - minN);
	}
}
void output(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}
// dem chan
int demchan(int a[], int n)
{
	int d = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) // if(laSNT(a[i])==1)
			d++;		   // s =s +a[i]
	}
	return d;
}
// liet ke >x
void LKlonhonX(int a[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] > x)
			printf("%d\t", a[i]);
	}
}
// tim max
int timmax(int a[], int n)
{
	int m = a[0], i;
	for (i = 1; i < n; i++) //
	{
		if (a[i] > m)
			m = a[i];
	}
	return m;
}
int kiemtrachan(int a[], int n)
{
	// 1:co - 0: ko co
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return 1;
	}
	return 0;
}
int main()
{
	// minN + rand() % (maxN + 1 - minN);
	/* Khoi tao bo sinh so ngau nhien */
	srand((int)time(0));
	printf("Hello\n");
	int a[MAX];
	int n;
	// input(a,n);
	random(a, n);
	printf("Mang:");
	output(a, n);
	/*
	printf("\n1. Mang co %d so chan",demchan(a,n));
	int x;
	printf("\n2Nhap x:");
	scanf("%d",&x);
	printf("Cac phan tu >X:");
	LKlonhonX(a,n,x);
	printf("\n3. Phan tu lon nhat la %d", timmax(a,n));
	*/
	if (kiemtrachan(a, n) == 1)
		printf("dsdsd");
	else
		printf("ko co");
	return 1;
}
