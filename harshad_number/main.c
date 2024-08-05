#include <stdio.h>

void main()
{
	int x = 0, i = 0;
	int total_digit = 0, div_number = 0;
	int x_arr[5] = { 0 };

	printf("x = ");
	scanf("%d", &x);

	int origin_x = x;

	while (1)
	{
		if (x >= 10)
		{
			if (x / 10 != 0)
			{
				x_arr[i] = x % 10;
				x = x / 10;
				i++;
			}
			else
				x_arr[i] = x;
		}
		else
		{
			x_arr[i] = x;
			break;
		}
	}
	
	for (int i = 0; i < 5; i++)
		total_digit += x_arr[i];

	div_number = origin_x % total_digit;

	if (div_number == 0)  // ³ª´©¾î¶³¾îÁü
		printf(">> true");
	else
		printf(">> false");
}