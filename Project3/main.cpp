// 문제 1

/*
#include <stdio.h>

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void main()
{
	int a = 10, b = 20;

	printf("[Before] a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("[After]  a = %d, b = %d", a, b);
}
*/


// 문제 2

/*
#include <stdio.h>

void func(int* mp, int* rp)
{
	int num = 0;
	printf("양수 입력 : ");
	scanf("%d", &num);

	*mp = num / 4;
	*rp = num % 4;
}

void main()
{
	int mod = 0, rem = 0;  // 몫, 나머지

	func(&mod, &rem);

	printf("4로 나눈 몫과 나머지: %d, %d", mod, rem);
}
*/


// 문제 3

/*
#include <stdio.h>

void swap(double* ap, double* bp)
{
	int tmp = *ap;
	*ap = *bp;
	*bp = tmp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*maxp < *midp)
		swap(maxp, midp);

	if (*maxp < *minp)
		swap(maxp, minp);

	if (*midp < *minp)
		swap(midp, minp);
}

void main()
{
	double mx, md, mn;

	printf("세 개의 실수 입력 : ");
	scanf("%lf %lf %lf", &mx, &md, &mn);

	line_up(&mx, &md, &mn);

	printf("세 실수의 정렬 (내림차순) : %.2lf > %.2lf > %.2lf", mx, md, mn);
}
*/


// 문제 4

/*
#include <stdio.h>
#include <string.h>
#define TXT_LEN 50

int compare(char stc[], char find)
{
	int cnt = 0;
	for (int i = 0; i < 50; i++)
	{
		if (stc[i] == find)
			cnt++;
	}

	return cnt;
}

void main()
{
	char txt[TXT_LEN] = {""};
	char search;
	int cnt = 0;

	printf("문자열 입력: ");
	scanf("%s", txt);

	getchar(); // 개행 문자 제거

	printf("찾을 문자: ");
	scanf("%c", &search);

	cnt = compare(txt, search);

	printf("%c의 개수 = %d", search, cnt);
}
*/


// 문제 5

/*
#include <stdio.h>

// 인자로 전달된 값의 제곱을 반환
int SquareByValue(int x)
{
	return (x * x);
}

// 저장되어있는 변수의 주소값을 인자로 받아 해당 변수의 저장된 값의 제곱을 그 변수에 다시 저장
void SquareByReference(int* x)
{
	*x = *x * *x;
}

void main()
{
	int num = 0;
	int num_value = 0, num_reference = 0;

	printf("값 입력: ");
	scanf("%d", &num);

	num_value = SquareByValue(num);

	num_reference = num;
	SquareByReference(&num_reference);

	printf("SquareByValue     : %d", num_value);
	printf("\nSquareByReference : %d\n", num_reference);
}
*/


// 문제 6

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#define DATA 5

// 정수값 입력
void Input(int data[])
{
	printf("정수값 5개 입력: ");
	//for (int i = 0; i < 5; i++)
	//	scanf("%d", &data[i]);
	scanf("%d %d %d %d %d", &data[0], &data[1], &data[2], &data[3], &data[4]);
}

// SWAP
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 오름차순
void Asc(int data[], int len)
{
	for (int i = 0; i < len; i++)
		for (int j = i + 1; j < len; j++)
			if (data[i] > data[j])
				swap(&data[i], &data[j]);

	printf("\n오름차순: ");
	for (int i = 0; i < len; i++)
		printf("%d ", data[i]);
}

// 내림차순
void Desc(int data[], int len)
{
	for (int i = 0; i < len; i++)
		for (int j = i + 1; j < len; j++)
			if (data[i] < data[j])
				swap(&data[i], &data[j]);

	printf("\n내림차순: ");
	for (int i = 0; i < len; i++)
		printf("%d ", data[i]);
}

void MaxData(int data[], int len)
{
	int max = data[0];

	for (int i = 0; i < len; i++)
		if (max < data[i])
			max = data[i];

	printf("최댓값: %d\n", max);
}

void MinData(int data[], int len)
{
	int min = data[0];

	for (int i = 0; i < len; i++)
		if (min > data[i])
			min = data[i];

	printf("최솟값: %d\n", min);
}

void SumAndAvg(int data[], int len)
{
	int sum = 0;
	double avg = 0;

	for (int i = 0; i < len; i++)
		sum += data[i];

	printf("합계: %d\n", sum);

	avg = sum / len;

	printf("평균값: %.2lf\n", avg);
}

void main()
{
	int data[DATA] = {};
	Input(data);

	int data_len = sizeof(data) / sizeof(int);   // 배열의 길이 = 5

	MaxData(data, data_len);
	MinData(data, data_len);
	SumAndAvg(data, data_len);

	printf("입력받은 배열: ");
	for (int i = 0; i < data_len; i++)
		printf("%d ", data[i]);

	Desc(data, data_len);
	Asc(data, data_len);
}
*/


// 문제 7

/*
#include <stdio.h>
#define SUB 5

// 정수값 입력
void InputScore(int score[])
{
	printf("다섯 과목의 점수 입력: ");
	//for (int i = 0; i < 5; i++)
	//	scanf("%d", &data[i]);
	scanf("%d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4]);
}

void PrintGraph(int score[])
{
	int star_num[SUB] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		star_num[i] = score[i] / 5;

		printf("(%d) ", score[i]);

		for (int c = 0; c < star_num[i]; c++)
			printf("*");

		printf("\n");
	}
}

void main()
{
	int score[SUB] = { 0 };

	InputScore(score);
	PrintGraph(score);
}
*/


// 문제 8

/*
#include <stdio.h>
#include <stdlib.h>  // srand
#include <time.h>

#define NUM 6
void RandomNum(int luck[])
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < NUM; i++)
		luck[i] = 1 + rand() % 45;

	printf("당첨 번호: ");
	for (int i = 0; i < NUM; i++)
		printf("%d ", luck[i]);
}

int CheckNum(int num[], int luck[])
{
	int cnt = 0;

	for (int i = 0; i < NUM; i++)
		for (int j = 0; j < NUM; j++)
			if (num[i] == luck[j])
				cnt++;
	return cnt;
}

void InputNum(int num[])
{
	printf("로또 번호(6개): ");
	scanf("%d %d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
}

void main()
{
	int num[NUM] = { 0 };
	int luck[NUM] = { 0 };

	InputNum(num);
	RandomNum(luck);
	int chknum = CheckNum(num, luck);
	printf("\n일치하는 번호의 개수: %d", chknum);
}
*/