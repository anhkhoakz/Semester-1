#include <stdio.h>
#define MAX 100
typedef struct birthday
{
    int date;
    int month;
    int year;

} Day;
typedef struct Sinhvien
{
    char name[30];
    char sex[4];
    Day birthday[10];
    float LT;
    float TH;
    float DTB;
} SV;
int inputn()
{
    int n;
    do
    {
        printf("\nInput number [1,10]:");
        scanf("%d", &n);
        if (n <= 0 || n > 10)
            printf("Error...");
    } while (n <= 0 || n > 10);
    return n;
}
void input(SV A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("=====Input SV %d====\n", i + 1);
        printf("Input name:");
        scanf("%s", &A[i].name);
        printf("Input sex:");
        scanf("%s", &A[i].sex);

        printf("Input date:");
        scanf("%d", &A[i].birthday->date);
        printf("Input month:");
        scanf("%d", &A[i].birthday->month);
        printf("Input year:");
        scanf("%d", &A[i].birthday->year);

        printf("Input LT:");
        scanf("%f", &A[i].LT);
        printf("Input TH:");
        scanf("%f", &A[i].TH);
        A[i].DTB = (A[i].LT + A[i].TH) / 2;
    }
}
void outputone(SV A)
{
    printf("\nName = %s", A.name);
    printf("\tsex=%s", A.sex);
    printf("\tBirthday = %d/%d/%d", A.birthday->date, A.birthday->month, A.birthday->year);
    printf("\tLT= %0.1f", A.LT);
    printf("\tTH=%0.1f", A.TH);
    printf("\tTB=%0.1f", A.DTB);
}
void output(SV A[], int n)
{
    printf("====Danh sach SV====\n");
    for (int i = 0; i < n; i++)
    {
        // printf("=====SV %d====\n", i +1);
        outputone(A[i]);
    }
}
// Đếm SV nam

int demnam(SV A[], int n)
{
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(A[i].sex, "nam") == 0)
            d++;
    }
    return d;
}
// Liệt kê danh sách Sv có DTB>=5
void lk(SV A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i].DTB >= 5)
        {
            outputone(A[i]);
        }
    }
}
int main()
{
    printf("Hello World");
    int n;
    n = inputn();
    SV A[MAX];
    input(A, n);

    output(A, n);
    printf("\nCo %d sinh vien nam", demnam(A, n));
    printf("\n===Danh sach Sv co DTB>=5===\n");
    lk(A, n);

    return 0;
}