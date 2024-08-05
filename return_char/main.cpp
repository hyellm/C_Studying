#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char s[100];

	printf("s: ");
	scanf("%s", s);

	int len = strlen(s);

	if (len % 2 == 0)  // Â¦¼ö
		printf("%c%c", s[len / 2 - 1], s[len / 2]);

	else  // È¦¼ö
		printf("%c", s[len / 2]);
}

	// char* sentence = (char*)malloc(strlen(s) + 1);
	// strcpy(sentence, s);
	// printf("strlen(s) = %d", strlen(s));
	// printf("%s", s);