#include <stdio.h>
#include <string.h>

void main()
{
	/*
	1. char storage 할당
	2. 같은 문자일 때 개수 합치기
	3. 각 물건 별로 개수 세기
	4. 제일 많은 물건 이름 출력
	*/

	char storage[30][30] = { "pencil", "pencil", "pencil", "book" };
	int num[30] = { 2, 4, 3, 1 };

	char clean_storage[30][30] = { "" };
	int clean_num[30] = { 0 };
	int idx = 0;

	// 1. 중복을 제거한 새로운 배열 만들어주기
	for (int i = 0; i < 4; i++)
	{
		int check = 0;

		for (int j = 0; j < idx; j++)
		{
			if ((strcmp(storage[i], clean_storage[j])) == 0)  // 문자열이 같다면
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

	// 2. 중복을 제거한 배열 속 물건의 개수를 각각 계산
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

	// 3. 가장 개수가 많은 물건 세기
	for (int i = 0; i < idx; i++)
	{
		for (int j = i + 1; j < idx; j++)
		{
			if (clean_num[j] > clean_num[i])
				max_obj = j;
		}
	}

	// 4. 출력
	printf("가장 개수가 많은 물건: %s", clean_storage[max_obj]);

}