/*
- 23.09.13
  # ���ڿ� pt.1
  ------------------------------------------------------------
  |  ���� 1  |  �̴� �ѿ�����
  |  ���� 2  |  ���ڿ� ��ȣȭ/��ȣȭ
  |  ���� 3  |  �̸��� ���� ���� ���� �빮�� �Է� > ���� ���� ���� �ҹ��ڷ� ������ ���  
*/

// ���� 1
/*
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
#define WORD_NUM 5

void ChangeEngToKor(char word_En[], char dict_En[][MAX_SIZE], char dict_Ko[][MAX_SIZE], int flg)
{
	printf("\n�˻��� ���� �ܾ� �Է�: ");
	scanf("%s", word_En);  // &word_En[0]

	for (int i = 0; i < WORD_NUM; i++)
	{
		flg = strcmp(word_En, dict_En[i]);

		if (flg == 0)
		{
			printf("%s �� %s\n", word_En, dict_Ko[i]);
			// printf("%d", flag);
			break;
		}
	}

	if (flg != 0)
		printf("�Է��� �ܾ ������ �����ϴ�.\n");
}

void ChangeKorToEng(char word_Ko[], char dict_Ko[][MAX_SIZE], char dict_En[][MAX_SIZE], int flg)
{
	printf("\n�˻��� �ѱ� �ܾ� �Է�: ");
	scanf("%s", word_Ko);

	flg = 0;
	for (int i = 0; i < 5; i++)
	{
		flg = strcmp(word_Ko, dict_Ko[i]);

		if (flg == 0)
		{
			printf("%s �� %s\n\n", word_Ko, dict_En[i]);
			break;
		}
	}

	if (flg != 0)
		printf("�Է��� �ܾ ������ �����ϴ�.\n");
}

void main()
{
	char Dict_eng[5][MAX_SIZE] = { "apple", "bicycle", "cat", "dinosaur", "eagle" };
	char Dict_kor[5][MAX_SIZE] = { "���", "������", "�����", "����", "������" };
	char word_eng[MAX_SIZE] = { "" }, word_kor[MAX_SIZE] = { "" };
	int num = 0, flag = 0;


	printf("[ �ѿ����� ]");

	while (1)
	{
		printf("\n[ 1. ���� �� �ѱ� | 2. �ѱ� �� ���� | 3. ���� ] : ");
		scanf("%d", &num);

		if (num == 3)
		{
			printf("�ѿ������� �����մϴ�.\n");
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


// ���� 2
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

	printf("���ڿ� �Է�: ");
	scanf("%s", pw);

	printf("���ڿ� ��ȣȭ �� �� �Է�: ");
	scanf("%d", &pw_renewal);


	for (int i = 0; i < strlen(pw); i++)
		pw_new[i] = pw[i] + pw_renewal;

	printf("��ȣȭ�� ���ڿ� ���: ");

	for (int i = 0; i < strlen(pw); i++)
		printf("%c", pw_new[i]);

	while (1)
	{
		printf("\n\n��ȣȭ�� ���Ͻø� ��й�ȣ �Է� : ");
		scanf("%s", pw_change);

		if (strcmp(pw_origin, pw_change) != 0)
			printf("*** Password Error ***");

		else
		{
			printf("��ȣȭ�� ���ڿ� ��� : ");

			for (int i = 0; i < strlen(pw); i++)
				printf("%c", pw[i]);

			break;
		}

	}

	printf("\n");
}
*/


// ���� 3
/*
#include <stdio.h>
#include <string.h>
#define NAME_LEN 100

void main()
{
	char name[NAME_LEN] = {""};
	char name_div[2][NAME_LEN] = {""};
	int cnt = 0;

	printf("�̸��� �������� ��/�̸� ������ �빮�ڷ� �Է� : ");
	
	//while (1)
	//{
		scanf("%[^\n]s", name);  // ���� ���� �Է¹ޱ�

		// scanf_s("%[^\n]s", name,sizeof(name));  // ���� ���� �Է¹ޱ�
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
			//		name[i] += 32;  // �빮�� > �ҹ���
			//	else
			//		name[i] = name[i];
			//}
			//else
			//{
			//	printf("�ٽ� �Է��ϼ���.\n");
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


// ���� 4
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

	printf("���ڿ��� �Է��ϼ���. : ");
	scanf("%[^\n]s", sentence_origin);

	printf("ã�� ���ڿ� : ");
	scanf("%s", find);

	printf("�ٲ� ���ڿ� : ");
	scanf("%s", change);


	int idx = 0;
	for (int i = 0; ; i++)
	{

		if (sentence_origin[i] == ' ' || sentence_origin[i] == 0)  // ���� or �� ���ڰ� ���� ��
		{
			tester[idx] = 0;
			idx = 0;
			// puts(tester);

			if (strcmp(tester, find) == 0)
				printf("%s ", change);
			else
				printf("%s ", tester);

			if (sentence_origin[i] == 0)  // ���� ���� ��
				break;

			continue;
		}
		
		tester[idx++] = sentence_origin[i];
		// ��ȣ �ȿ� ++�� ���� �� �ڵ带 �����ϰ� idx ���� ++ ���� (++ ���� ���� �� idx++;�� ���� �� �Ͱ� ������)


		//if (sentence_origin[i] == 32)  // ������ ��
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
	//		if (strcmp(sentence_origin[i], find[j]) == 0)  // ������ ���� ��

	//	}
	//	
	//}

}
*/


// ���� 5
/*
#include <stdio.h>
#include <string.h>
#define TEXT_LEN 50

void main()
{
	char text[TEXT_LEN] = { "" };
	char text_change[TEXT_LEN] = { "" };

	printf("���ڿ� �Է� : ");
	scanf("%s", text);

	// ���ڿ� �����ϱ�
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

	printf("\n");  // �ܼ� �ٹٲ޿�
}
*/


// ���� 6
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
		printf("�ø��� ��ȣ ���� �Է� : ");
		scanf("%d", &guitar);
	} while (1000 <= guitar);


	char** SerialNum = (char**)calloc(guitar, sizeof(char*));

	for (int i = 0; i < guitar; i++)
		SerialNum[i] = (char*)calloc(MAX_LEN, sizeof(char));

	for (int i = 0; i < guitar; i++)
		scanf("%s", SerialNum[i]);


	// 1. ���̷� ���ϱ�

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


	// 2. ���� �ڸ����� ������ ��

	
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

				// 3. ���������� ���ϱ�
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


	
	 // 1. �ø��� ���� �Է¹ޱ�
	 // 2. �ø��� �ټ� �� �Է¹ޱ�
	 // 3. �� ����
	 // 3-1 ����. ���̰� ª�� ���� �켱
	 // 3-2 ���̰� ���� ��� �ø��� �� ��� ������ ������ ��. ���� ���� ���� �켱
	 // 3-3 ���ĺ���. ���ĺ��� ���� ���� �켱
	 

	for (int i = 0; i < guitar; i++)
		free(SerialNum[i]);

	free(SerialNum);
}
*/