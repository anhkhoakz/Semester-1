#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fr;
    FILE *fw;

    char temp[255], inputFile[255];
    int start, end;

    printf("Nhap vao ten file: ");
    scanf("%s", &inputFile);
    fr = fopen(inputFile, "r");

    while (fscanf(fr, "%d %d", &start, &end) != EOF)
    {
        printf("%d %d", start, end);
    }
    fclose(fr);

    fw = fopen("output.out", "w+");

    fgets(temp, 255, (FILE *)fr);

    fputs("Nguyễn Huỳnh Anh Khoa - 522H0046\n", fw);

    int i, sum = 0;
    for (i = start; i <= end; i++)
    {
        sum += i;
    }

    fprintf(fw, "%d", sum);

    fclose(fw);
    return 0;
}