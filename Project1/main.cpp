// 1��

#include <stdio.h>

void main()
{
	int start = 0, before = 0, after = 0;
	int total = 0, count = 0;

	printf("ù �� �ݾ�, ��° ��~70���������� �ݾ�, 100���� �̻��� �������� �ݾ�\n");

	while (1)
	{
		scanf("%d %d %d", &start, &before, &after);

		if ((0 <= start) && (start <= 99) && (1 <= before) && (before <= after) && (after <= 25))
			break;
		else
			printf("*** �ٽ� �Է��ϼ���. ***\n");
	}

	total = start;
	count++;  // ù �� ����

	while (total < 100)
	{
		if (total < 70)  // ��° �޺��� 70���� �̻����
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

	printf(">>> %d ����", count);
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

	printf(">> ���� ��ġ ��ǥ: [%d, %d]\n", result[0], result[1]);

	// �迭 ���� �Ҵ�޴� ��
	//char* route = (char*)malloc(sizeof(char) * n);
	//char* route = (char*)calloc(n,sizeof(char));
}