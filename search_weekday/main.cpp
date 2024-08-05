#include <stdio.h>

void main()
{
	int a, b;
	int result, total_days = 0;

	char WEEKDAY[8][4] = { "XXX", "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
	int DAYS[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("2016년 a월 b일");
	printf("\na: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);

	for (int i = 0; i < a; i++)
		total_days += DAYS[i];

	total_days += b;
	printf("\ntotal_days = %d", total_days);

	result = total_days % 7;
	printf("\nresult = %d", result);

	printf("\n\n2016년 %d월 %d일은 %s입니다.\n", a, b, WEEKDAY[result]);

	//for (int i = 0; i < 3; i++)
	//	printf("%c", WEEKDAY[result][i]);

}