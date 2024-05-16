// 1번

#include <stdio.h>

void main()
{
	int start = 0, before = 0, after = 0;
	int total = 0, count = 0;

	printf("첫 달 금액, 둘째 달~70만원까지의 금액, 100만원 이상일 때까지의 금액\n");

	while (1)
	{
		scanf("%d %d %d", &start, &before, &after);

		if ((0 <= start) && (start <= 99) && (1 <= before) && (before <= after) && (after <= 25))
			break;
		else
			printf("*** 다시 입력하세요. ***\n");
	}

	total = start;
	count++;  // 첫 달 저축

	while (total < 100)
	{
		if (total < 70)  // 둘째 달부터 70만원 이상까지
		{
			total += before;
			count++;
		}
		else
		{
			total += after;
			count++;
		}
	}

	printf(">>> %d 개월", count);
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int result[2] = { 0, 0 };
	char route[20] = { };

	printf("route: ");
	scanf("%s", route);

	for (int i = 0; i < 20; i++)
	{
		//if ((route[i] != 'N') && (route[i] != 'S') && (route[i] != 'E') && (route[i] != 'W'))
		//	break;

		switch (route[i]) {
		case 'N':
		{
			result[1] += 1;
			break;
		}
		case 'S':
		{
			result[1] -= 1;
			break;
		}
		case 'E':
		{
			result[0] += 1;
			break;
		}
		case 'W':
		{
			result[0] -= 1;
			break;
		}
		default:
			break;
		}
	}

	printf(">> 도착 위치 좌표: [%d, %d]\n", result[0], result[1]);

	// 배열 동적 할당받는 법
	//char* route = (char*)malloc(sizeof(char) * n);
	//char* route = (char*)calloc(n,sizeof(char));
}