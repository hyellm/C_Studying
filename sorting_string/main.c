#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char* s = (char*)malloc(sizeof(char) * 50);
	char t;

	printf("s = ");
	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++)
	{
		for (int j = 0; j < strlen(s); j++)
		{
			if (s[i] > s[j])
			{
				t = s[i];
				s[i] = s[j];
				s[j] = t;
			}
		}
	}

	printf("%s\n", s);
}