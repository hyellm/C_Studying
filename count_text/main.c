#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

void main()
{
	char* s = (char*)malloc(sizeof(char) * 50); //동적할당
	int p = 0, y = 0;

	printf("s = ");
	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == 'p' || s[i] == 'P')
			p++;
		else if (s[i] == 'y' || s[i] == 'Y')
			y++;
	}

	if (p == y)
		printf("True");
	else
		printf("False");
}