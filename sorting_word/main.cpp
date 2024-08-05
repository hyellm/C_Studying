#include <stdio.h>
#include <string.h>

void main()
{
	char word[7][7] = { {"sun"}, {"bed"}, {"car"} };
	int n;

	printf("n = ");
	scanf("%d", &n);

	//char sort[7] = { };
	//char tmp;
	char tmp_word[7];

	//for (int i = 0; i < 7; i++)
	//	sort[i] = word[i][n];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (word[i][n] < word[j][n])
			{
				strcpy(tmp_word, word[i]);
				strcpy(word[i], word[j]);
				strcpy(word[j], tmp_word);
			}
		}
	}

	for (int i = 0; i < 3; i++)
		printf("%s\n", word[i]);
}