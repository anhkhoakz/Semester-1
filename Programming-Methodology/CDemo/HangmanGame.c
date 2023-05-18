#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void randWord(char[]);
int checkQuess(char[], char);
void update(char[], char[], char);

int main(void)
{
	char word[6];
	char guessWord[6] = "_____";
	int i;
	char c;

	randWord(word);
	for (i = 0; i < 5; i++)
	{
		printf("Guess %d: ", i + 1);
		c = getchar();
		// scanf("%c", &c);
		getchar();

		if (checkQuess(word, c) == 1) // doan dung
		{
			i = i - 1;
			update(word, guessWord, c);

			if (strcmp(word, guessWord) == 0)
			{
				printf("Congratulation. Word is %s. Enter to exit program", guessWord);
				getchar();

				return 0;
			}
			else
			{
				printf("Guess String : %s\n", guessWord);
			}
		}
	}
	printf("Game Over. See you again");
}

// TODO: chon ngau nhien 1 tu gom 5 ky tu ??
void randWord(char word[])
{
	strcpy(word, "apple");
}

// result: 0 doan sai; 1 doan dung
int checkQuess(char word[], char ch)
{
	int len = strlen(word);
	int i;
	for (i = 0; i < len; i++)
	{
		if (word[i] == ch)
		{
			return 1;
		}
	}
	return 0;
}

void update(char word[], char guessWord[], char ch)
{
	int len = strlen(word);
	int i;
	for (i = 0; i < len; i++)
	{
		if (word[i] == ch)
		{
			guessWord[i] = word[i];
		}
	}
}
