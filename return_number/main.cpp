#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char arr[10];
	char temp[10] = { 0 };

	printf("arr = ");
	gets_s(arr);

	int len = strlen(arr);
	int c = 0;

	temp[c] = arr[c];

	for (int i = 0; i < len; i++)
	{
		if (arr[i] == temp[c])
			continue;
		else
			c++;
			temp[c] = arr[i];
	}

	printf("\n");

	for (int i = 0; i < strlen(arr); i++)
		printf("%c ", arr[i]);

	printf("\n");

	for (int i = 0; i < strlen(temp); i++)
		printf("%c ", temp[i]);

	printf("\n");

	//printf("%s\n", arr);
	//printf("%s", temp);

}