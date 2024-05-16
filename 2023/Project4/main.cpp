#include <stdio.h>

// 문제 1

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InputScore(int kr[], int jp[])
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 9; i++)
	{
		kr[i] = rand() % 5;
		jp[i] = rand() % 5;
	}
}

void AddScore(int kr[], int jp[])
{
	int sum_kr = 0, sum_jp = 0;

	for (int i = 0; i < 9; i++)
	{
		sum_kr += kr[i];
		sum_jp += jp[i];
	}

	kr[9] = sum_kr;
	jp[9] = sum_jp;
}

void CheckScore(int kr[], int jp[])
{
	printf("       1회  2회  3회  4회  5회  6회  7회  8회  9회  점수");

	printf("\nKorea ");
	for (int i = 0; i < 10; i++)
		printf("  %d  ", kr[i]);

	printf("\nJapan ");
	for (int i = 0; i < 10; i++)
		printf("  %d  ", jp[i]);

	if (kr[9] > jp[9])
		printf("\n\n%d : %d, 한국 승", kr[9], jp[9]);
	else if (kr[9] < jp[9])
		printf("\n\n%d : %d, 일본 승", kr[9], jp[9]);
	else if(kr[9] == jp[9])
		printf("\n\n%d : %d, 동점", kr[9], jp[9]);
}


void main()
{
	int kr[10] = {};
	int jp[10] = {};

	InputScore(kr, jp);
	AddScore(kr, jp);
	CheckScore(kr, jp);
}
*/


// 문제 2

/*
#include <stdio.h>
#include <string.h>
#define SENTENCE 100

void Changer(char txt[])
{
	for (int i = 0; i < strlen(txt); i++)
	{
		if (('a' <= txt[i]) && (txt[i] <= 'z'))
			txt[i] = txt[i] - 32;
	}

	printf("대문자 변환: %s", txt);
}

void main()
{
	char text[SENTENCE] = {};

	printf("문자열 입력: ");
	scanf("%s", text);

	Changer(text);
}
*/


// 문제 3

/*
#include <stdio.h>
#include <string.h>
#define LEN 50

void Print(char t[])
{
	for (int i = strlen(t); i >= 0; i--)
		printf("%c", t[i]);
}

void main()
{
	char txt[LEN] = {};

	printf("문자열 입력: ");
	scanf("%s", txt);

	printf("  역순 출력: ");
	Print(txt);
}
*/


// 문제 4

/*
#include <string.h>
#define LEN 50

void Print(char t[])
{
	t[0] -= 32;

	for (int i = 1; i < LEN; i++)
	{
		if (t[i] == ' ')
			t[i + 1] = t[i + 1] - 32;
	}

	printf("%s", t);
}

void main()
{
	char txt[LEN] = {};

	printf("문자열 입력: ");
	gets_s(txt);

	printf("  변환 출력: ");
	Print(txt);
}
*/


// 문제 5

/*
#include <string.h>
#define LEN 50

int Print(char t[], int a[])
{
	int len = 0;

	for (int i = 0; i < strlen(t); i++)
	{
		a[t[i]-'a']++;
		len++;
	}

	// 기존 :
	//		for (int j = 'a'; j <= 'z'; j++)
	//		if (t[i] == j)
	//		{
	//			a[j - 'a']++;
	//			len++;
	//		}

	for (int i = 0; i < 26; i++)
		if (a[i] > 0)
			printf("%c: %d\n", 'a' + i, a[i]);

	return len;
}

void main()
{
	char txt[LEN] = {};
	int alp[26] = { 0 };

	printf("문자열 입력: ");
	scanf("%s", txt);

	int ln = 0;
	int l = Print(txt, alp);

	printf("알파벳 총 개수: ");
	for (int i = 0; i < 26; i++)
		if (alp[i] != 0)
			ln += alp[i];
	
	printf("%d", ln);
}
*/


// 문제 6

/*
#include <stdio.h>
#include <string.h>
#define LEN 50

void Pr(char t[], int s, int e)
{
	printf("문자열 출력: ");

	for (int i = s - 1; i < e; i++)
		printf("%c", t[i]);
}

void main()
{
	char txt[LEN] = {};
	int stt, end;

	printf("문자열 입력: ");
	scanf("%s", txt);

	printf("시작 위치 입력: ");
	scanf("%d", &stt);

	printf("도착 위치 입력: ");
	scanf("%d", &end);

	Pr(txt, stt, end);
}
*/


// 문제 7

/*
#include <stdio.h>
#include <string.h>
#define LEN 5

void Pr(int ar1[], int ar2[])
{
	int arr[10];
	int t = 5;

	for (int i = 0; i < LEN; i++)
		arr[i] = ar1[i];

	for (int i = 0; i < LEN; i++)
	{
		int c = 0;

		for (int j = 0; j < t; j++)
		{
			if (ar2[i] == arr[j]) {
				c = 1;
				break;
			}
		}

		if (c == 0)
		{
			arr[t] = ar2[i];
			t++;
		}
	}

	printf("\n합집합: ");
	for (int i = 0; i < t; i++)
		printf("%d ", arr[i]);
}

void main()
{
	int a1[LEN] = { 1, 3, 5, 7, 9 };
	int a2[LEN] = { 1, 2, 5, 4, 9 };

	printf("a1 = ");
	for (int i = 0; i < LEN; i++)
		printf("%d ", a1[i]);

	printf("\na2 = ");
	for (int i = 0; i < LEN; i++)
		printf("%d ", a2[i]);


	Pr(a1, a2);
}
*/


// 문제 8

/*
#define LEN 5

void Pr(int ar1[], int ar2[])
{
	int arr[10];
	int c = 0;

	for (int i = 0; i < LEN; i++)
	{
		for (int j = 0; j < LEN; j++)
		{
			if (ar1[i] == ar2[j])
			{
				arr[c] = ar1[i];
				c++;
			}
		}
	}

	printf("\n교집합: ");
	for (int i = 0; i < c; i++)
		printf("%d ", arr[i]);
}

void main()
{
	int a1[LEN] = { 1, 3, 5, 7, 9 };
	int a2[LEN] = { 1, 2, 5, 4, 9 };

	printf("a1 = ");
	for (int i = 0; i < LEN; i++)
		printf("%d ", a1[i]);

	printf("\na2 = ");
	for (int i = 0; i < LEN; i++)
		printf("%d ", a2[i]);

	Pr(a1, a2);
}
*/


// 문제 9

/*
#define LEN 5

void Pr(int ar1[], int ar2[])
{
	int arr[10] = { 0 };
	int c = 0;

	for (int i = 0; i < LEN; i++)
		arr[i] = ar1[i];

	for (int i = 0; i < LEN; i++)
	{
		for (int j = 0; j < LEN; j++)
		{
			if (ar1[i] == ar2[j])
			{
				arr[i] = 0;
				c++;
			}
		}
	}

	printf("\n차집합: ");
	for (int i = 0; i < 10; i++)
		if (arr[i] != 0)
			printf("%d ", arr[i]);
}

void main()
{
	int a1[LEN] = { 1, 3, 5, 7, 9 };
	int a2[LEN] = { 1, 2, 5, 4, 9 };

	printf("a1 = ");
	for (int i = 0; i < LEN; i++)
		printf("%d ", a1[i]);

	printf("\na2 = ");
	for (int i = 0; i < LEN; i++)
		printf("%d ", a2[i]);

	Pr(a1, a2);
}
*/


// 문제 10

/*
#include <string.h>

int Pr(char t[])
{
	printf("입력한 문자열: %s", t);

	return strlen(t);
}

void main()
{
	char t[20] = { "" };

	printf("문자열 입력: ");
	scanf("%s", t);

	int len = Pr(t);
	printf("\n문자열의 길이: %d", len);
}
*/