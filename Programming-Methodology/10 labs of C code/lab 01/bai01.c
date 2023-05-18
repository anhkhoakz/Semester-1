# include <stdio.h>

int main()
{
    int a[1000], i, n, x, temp = 0;
    do
    {   
        printf("Vui long nhap vao mot so nguyen duong: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("Vui long nhap vao phan tu thu %d: ", i + 1);
            scanf("%d", &a[i]);
        }
        if (n < 1 || n > 999)
        {
            printf("Vui long nhap vao con so hop le!\n");
        } 
    }
    while (n < 1 || n > 999);

    printf("Nhap vao so can tim: ");
    scanf("%d", &x);

    for (i = 0; i < n; i ++)
    {
        if (a[i] == x)
        {
            temp = i;
            break;
        }
    }

    if (temp == 1)
    {
        printf("%d", temp + 1);
    }
    else if (temp == 0)
    {
        printf("-1");
    }
    return 0;
}