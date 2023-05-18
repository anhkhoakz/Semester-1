// Unit16_CharacterDemo2.c
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 101

int inputString(char[], int);
void copyString(char[], char[]);

int main(void)
{
	char name[MAX_SIZE];
	char name_sv2[MAX_SIZE];

	printf("Enter a full name (max = 100 characters):");
	inputString(name, MAX_SIZE);
	printf("Full name : %s\n", name);

	printf("Enter a full name (max = 100 characters):");
	inputString(name_sv2, MAX_SIZE);
	printf("Full name : %s\n", name_sv2);

	printf("%d", strcmp(name, name_sv2));

	return 0;
}

int inputString(char str[], int size)
{
	int length;
	fgets(str, size, stdin);
	// delete '\n' character
	length = strlen(str);
	if (str[length - 1] == '\n')
	{
		str[length - 1] = '\0';
	}
	return strlen(str);
}

void copyString(char dest[], char orgin[])
{
	// strcpy(dest, origin);
	int len, i;

	len = strlen(orgin);
	for (i = 0; i < len; i++)
	{
		dest[i] = orgin[i];
	}

	dest[len] = '\0';
}
