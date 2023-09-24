/*
- 23.09.13
  # 문자열 pt.1
  ------------------------------------------------------------
  |  문제 1  |  미니 한영사전
  |  문제 2  |  문자열 암호화/복호화
  |  문제 3  |  이름을 공백 포함 영어 대문자 입력 > 공백 기준 영어 소문자로 나누어 출력  
*/

// 문제 1
/*
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
#define WORD_NUM 5

void ChangeEngToKor(char word_En[], char dict_En[][MAX_SIZE], char dict_Ko[][MAX_SIZE], int flg)
{
	printf("\n검색할 영어 단어 입력: ");
	scanf("%s", word_En);  // &word_En[0]

	for (int i = 0; i < WORD_NUM; i++)
	{
		flg = strcmp(word_En, dict_En[i]);

		if (flg == 0)
		{
			printf("%s → %s\n", word_En, dict_Ko[i]);
			// printf("%d", flag);
			break;
		}
	}

	if (flg != 0)
		printf("입력한 단어가 사전에 없습니다.\n");
}

void ChangeKorToEng(char word_Ko[], char dict_Ko[][MAX_SIZE], char dict_En[][MAX_SIZE], int flg)
{
	printf("\n검색할 한글 단어 입력: ");
	scanf("%s", word_Ko);

	flg = 0;
	for (int i = 0; i < 5; i++)
	{
		flg = strcmp(word_Ko, dict_Ko[i]);

		if (flg == 0)
		{
			printf("%s → %s\n\n", word_Ko, dict_En[i]);
			break;
		}
	}

	if (flg != 0)
		printf("입력한 단어가 사전에 없습니다.\n");
}

void main()
{
	char Dict_eng[5][MAX_SIZE] = { "apple", "bicycle", "cat", "dinosaur", "eagle" };
	char Dict_kor[5][MAX_SIZE] = { "사과", "자전거", "고양이", "공룡", "독수리" };
	char word_eng[MAX_SIZE] = { "" }, word_kor[MAX_SIZE] = { "" };
	int num = 0, flag = 0;


	printf("[ 한영사전 ]");

	while (1)
	{
		printf("\n[ 1. 영어 → 한글 | 2. 한글 → 영어 | 3. 종료 ] : ");
		scanf("%d", &num);

		if (num == 3)
		{
			printf("한영사전을 종료합니다.\n");
			break;
		}

		switch (num)
		{
		case(1):
			ChangeEngToKor(word_eng, Dict_eng, Dict_kor, flag);
			break;

		case(2):
			ChangeKorToEng(word_kor, Dict_kor, Dict_eng, flag);
			break;
		}

	}
}
*/


// 문제 2
/*
#include <stdio.h>
#include <string.h>
#define MAX_LEN 27

void main()
{
	//char key[1][MAX_LEN] = { "abcdefghijklmnopqrstuvwxyz" };
	char pw[MAX_LEN] = { };
	char pw_new[MAX_LEN] = { };
	int pw_renewal = 0;
	char pw_origin[MAX_LEN] = { "0070" }, pw_change[MAX_LEN] = { "" };

	printf("문자열 입력: ");
	scanf("%s", pw);

	printf("문자열 암호화 할 값 입력: ");
	scanf("%d", &pw_renewal);


	for (int i = 0; i < strlen(pw); i++)
		pw_new[i] = pw[i] + pw_renewal;

	printf("암호화된 문자열 출력: ");

	for (int i = 0; i < strlen(pw); i++)
		printf("%c", pw_new[i]);

	while (1)
	{
		printf("\n\n복호화를 원하시면 비밀번호 입력 : ");
		scanf("%s", pw_change);

		if (strcmp(pw_origin, pw_change) != 0)
			printf("*** Password Error ***");

		else
		{
			printf("복호화된 문자열 출력 : ");

			for (int i = 0; i < strlen(pw); i++)
				printf("%c", pw[i]);

			break;
		}

	}

	printf("\n");
}
*/


// 문제 3
/*
#include <stdio.h>
#include <string.h>
#define NAME_LEN 100

void main()
{
	char name[NAME_LEN] = {""};
	char name_div[2][NAME_LEN] = {""};
	int cnt = 0;

	printf("이름을 공백으로 성/이름 나누어 대문자로 입력 : ");
	
	//while (1)
	//{
		scanf("%[^\n]s", name);  // 공백 포함 입력받기

		// scanf_s("%[^\n]s", name,sizeof(name));  // 공백 포함 입력받기
		// gets_s(name, sizeof(name));
		int r = 0,c=0;
		for (int i = 0; i < strlen(name); i++)
		{
			if (name[i] == ' ') {
				r++;
				c = 0;
				continue;
			}
			name_div[r][c++] = name[i] + 32;
			//if (((65 <= name[i]) && (name[i] <= 90)) || name[i] == 32)
			//{
			//	if (name[i] != 32)
			//		name[i] += 32;  // 대문자 > 소문자
			//	else
			//		name[i] = name[i];
			//}
			//else
			//{
			//	printf("다시 입력하세요.\n");
			//	break;
			//}
		}

	//	break;
	//}

	//for (int i = 0; i < 1; i++)
	//{
	//	for (int j = cnt; j < strlen(name); j++)
	//	{
	//		if (name[j] == 32)
	//		{	
	//			j++;
	//		}
	//		else if (name[i] != 32)
	//		{
	//			name_div[i][j] = name[j];
	//			cnt++;
	//		}
	//			

	//	}
	//}

	
	for (int i = 1; i >= 0; i--)
	{
		printf("%s", name_div[i]);

		if (i != 0)
			printf(", ");
	}	
}
*/


// 문제 4
/*
#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

void main()
{
	char sentence_origin[MAX_LEN] = {""};
	char sentence_new[MAX_LEN] = { "" };
	char find[MAX_LEN] = { "" }, change[MAX_LEN] = { "" };
	char tester[MAX_LEN] = { "" };

	printf("문자열을 입력하세요. : ");
	scanf("%[^\n]s", sentence_origin);

	printf("찾을 문자열 : ");
	scanf("%s", find);

	printf("바꿀 문자열 : ");
	scanf("%s", change);


	int idx = 0;
	for (int i = 0; ; i++)
	{

		if (sentence_origin[i] == ' ' || sentence_origin[i] == 0)  // 공백 or 끝 글자가 왔을 때
		{
			tester[idx] = 0;
			idx = 0;
			// puts(tester);

			if (strcmp(tester, find) == 0)
				printf("%s ", change);
			else
				printf("%s ", tester);

			if (sentence_origin[i] == 0)  // 문장 끝일 때
				break;

			continue;
		}
		
		tester[idx++] = sentence_origin[i];
		// 괄호 안에 ++를 쓰면 이 코드를 실행하고 idx 값을 ++ 해줌 (++ 없이 실행 후 idx++;를 따로 쓴 것과 동일함)


		//if (sentence_origin[i] == 32)  // 공백일 때
		//{
		//	tester[i] = '\0';
		//	//printf("%c\n", tester[i]);
		//	i++;
		//}
		//else
		//{
		//	tester[i] = sentence_origin[i];
		//	//printf("%c", tester[i]);
		//	i++;
		//}

		// printf("%s", tester[i]);
	}

	//for (int i = 0; i < MAX_LEN; i++)
	//{
	//	for (int j = 0; j < MAX_LEN; j++)
	//	{
	//		if (strcmp(sentence_origin[i], find[j]) == 0)  // 내용이 같을 때

	//	}
	//	
	//}

}
*/


// 문제 5
/*
#include <stdio.h>
#include <string.h>
#define TEXT_LEN 50

void main()
{
	char text[TEXT_LEN] = { "" };
	char text_change[TEXT_LEN] = { "" };

	printf("문자열 입력 : ");
	scanf("%s", text);

	// 문자열 복붙하기
	for (int i = 0; i < strlen(text); i++)
		text_change[i] = text[i];

	printf("\n1 : %s", text);

	for (int i = 2; i <= strlen(text) + 1; i++)
	{
		printf("\n%d : ", i);

		for (int j = 0; j < strlen(text); j++)
		{
			int idx = 0;
			text_change[j] += 1;

			if (text_change[j] >= text[0] + strlen(text))
			{
				idx = text_change[j] % (text[0] + strlen(text));
				text_change[j] = text[idx];
			}

			printf("%c", text_change[j]);
		}
	}

	printf("\n");  // 단순 줄바꿈용
}
*/


// 문제 6
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 50


void main()
{
	int guitar = 0;

	do
	{
		printf("시리얼 번호 개수 입력 : ");
		scanf("%d", &guitar);
	} while (1000 <= guitar);


	char** SerialNum = (char**)calloc(guitar, sizeof(char*));

	for (int i = 0; i < guitar; i++)
		SerialNum[i] = (char*)calloc(MAX_LEN, sizeof(char));

	for (int i = 0; i < guitar; i++)
		scanf("%s", SerialNum[i]);


	// 1. 길이로 비교하기

	char tmp[MAX_LEN];

	for (int i = 0; i < guitar; i++)
		for (int j = i + 1; j < guitar; j++)
			if (strlen(SerialNum[i]) >= strlen(SerialNum[j]))
			{
				// swap
				strcpy(tmp, SerialNum[j]);
				strcpy(SerialNum[j], SerialNum[i]);
				strcpy(SerialNum[i], tmp);
			}


	// 2. 숫자 자리수의 합으로 비교

	
	for (int i = 0; i < guitar; i++)
		for (int j = i + 1; j < guitar; j++)
			if (strlen(SerialNum[i]) == strlen(SerialNum[j]))
			{
				int sumI = 0, sumJ = 0;

				for (int len = 0; len < strlen(SerialNum[i]); len++)
				{
					if (('0' <= SerialNum[i][len]) && (SerialNum[i][len] <= '9'))
						sumI += SerialNum[i][len];

					if (('0' <= SerialNum[j][len]) && (SerialNum[j][len] <= '9'))
						sumJ += SerialNum[j][len];
				}

				if (sumI > sumJ)
				{
					// swap
					strcpy(tmp, SerialNum[j]);
					strcpy(SerialNum[j], SerialNum[i]);
					strcpy(SerialNum[i], tmp);
				}

				// 3. 사전순으로 비교하기
				else if (sumI == sumJ)
				{
					if (strcmp(SerialNum[i], SerialNum[j]) > 0)
					{
						strcpy(tmp, SerialNum[j]);
						strcpy(SerialNum[j], SerialNum[i]);
						strcpy(SerialNum[i], tmp);
					}
				}
			}


	printf("\n=========\n");

	for (int i = 0; i < guitar; i++)
		printf("%s\n", SerialNum[i]);


	
	 // 1. 시리얼 개수 입력받기
	 // 2. 시리얼 다섯 개 입력받기
	 // 3. 비교 시작
	 // 3-1 길이. 길이가 짧은 것이 우선
	 // 3-2 길이가 같은 경우 시리얼 내 모든 숫자의 합으로 비교. 값이 작은 것이 우선
	 // 3-3 알파벳순. 알파벳이 작은 순이 우선
	 

	for (int i = 0; i < guitar; i++)
		free(SerialNum[i]);

	free(SerialNum);
}
*/