#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int arr[10] = { 0 };
	int div, loc = 0, c = 0, temp;
	int result[10] = { 0 };

	printf("arr = ");

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);

		if (getc(stdin) == '\n')
			break;
	}
	                
	printf("div = ");
	scanf("%d", &div);

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 0)
			break;

		if (arr[i] % div == 0)
		{
			result[loc] = arr[i];
			loc++;
			c++;
		}
	}
	if (c == 0) {
		printf("-1");
		return;
	}
	// printf("c = %d\n", c);

	for (int i = 0; i < c; i++)
	{
		for (int j = i + 1; j < c; j++)
		{
			if (result[i] > result[j])
			{
				temp = result[i];
				result[i] = result[j];
				result[j] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (result[i] == 0)
			continue;

		printf("%d ", result[i]);
	}
}