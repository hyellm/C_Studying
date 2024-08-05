#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char* s = (char*)malloc(sizeof(char) * 50);
	
	printf("s = ");
	gets(s);
	int len = strlen(s);

	char* ptr = strtok(s, " ");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);

		for (int i = 0; ptr[i] != 0; i++)
		{
			if (i % 2 == 0)
				ptr[i] -= 32;
		}

		ptr = strtok(NULL, " ");
	}

	for (int i = 0; i < len; i++)
	{
		if (s[i] == 0)
			printf(" ");
		printf("%c", s[i]);
	}
	
}