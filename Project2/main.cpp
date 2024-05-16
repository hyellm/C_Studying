#include <stdio.h>
#include <string.h>

void main()
{
	/*
	1. char storage �Ҵ�
	2. ���� ������ �� ���� ��ġ��
	3. �� ���� ���� ���� ����
	4. ���� ���� ���� �̸� ���
	*/

	char storage[30][30] = { "pencil", "pencil", "pencil", "book" };
	int num[30] = { 2, 4, 3, 1 };

	char clean_storage[30][30] = { "" };
	int clean_num[30] = { 0 };
	int idx = 0;

	// 1. �ߺ��� ������ ���ο� �迭 ������ֱ�
	for (int i = 0; i < 4; i++)
	{
		int check = 0;

		for (int j = 0; j < idx; j++)
		{
			if ((strcmp(storage[i], clean_storage[j])) == 0)  // ���ڿ��� ���ٸ�
			{
				check = 1;
				break;
			}
			
		}

		if (check == 0)
		{
			strcpy(clean_storage[idx], storage[i]);
			idx++;
		}
	}

	// 2. �ߺ��� ������ �迭 �� ������ ������ ���� ���
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < idx; j++)
		{
			if ((strcmp(storage[i], clean_storage[j])) == 0)
				clean_num[j] += num[i];
		}
	}

	//for (int i = 0; i < idx; i++)
	//{
	//	printf("%s, ", clean_storage[i]);
	//	printf("%d ", clean_num[i]);
	//}

	int max_obj = 0;

	// 3. ���� ������ ���� ���� ����
	for (int i = 0; i < idx; i++)
	{
		for (int j = i + 1; j < idx; j++)
		{
			if (clean_num[j] > clean_num[i])
				max_obj = j;
		}
	}

	// 4. ���
	printf("���� ������ ���� ����: %s", clean_storage[max_obj]);

}