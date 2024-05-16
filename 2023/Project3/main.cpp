// ���� 1

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


// ���� 2

/*
#include <stdio.h>

void func(int* mp, int* rp)
{
	int num = 0;
	printf("��� �Է� : ");
	scanf("%d", &num);

	*mp = num / 4;
	*rp = num % 4;
}

void main()
{
	int mod = 0, rem = 0;  // ��, ������

	func(&mod, &rem);

	printf("4�� ���� ��� ������: %d, %d", mod, rem);
}
*/


// ���� 3

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

	printf("�� ���� �Ǽ� �Է� : ");
	scanf("%lf %lf %lf", &mx, &md, &mn);

	line_up(&mx, &md, &mn);

	printf("�� �Ǽ��� ���� (��������) : %.2lf > %.2lf > %.2lf", mx, md, mn);
}
*/


// ���� 4

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

	printf("���ڿ� �Է�: ");
	scanf("%s", txt);

	getchar(); // ���� ���� ����

	printf("ã�� ����: ");
	scanf("%c", &search);

	cnt = compare(txt, search);

	printf("%c�� ���� = %d", search, cnt);
}
*/


// ���� 5

/*
#include <stdio.h>

// ���ڷ� ���޵� ���� ������ ��ȯ
int SquareByValue(int x)
{
	return (x * x);
}

// ����Ǿ��ִ� ������ �ּҰ��� ���ڷ� �޾� �ش� ������ ����� ���� ������ �� ������ �ٽ� ����
void SquareByReference(int* x)
{
	*x = *x * *x;
}

void main()
{
	int num = 0;
	int num_value = 0, num_reference = 0;

	printf("�� �Է�: ");
	scanf("%d", &num);

	num_value = SquareByValue(num);

	num_reference = num;
	SquareByReference(&num_reference);

	printf("SquareByValue     : %d", num_value);
	printf("\nSquareByReference : %d\n", num_reference);
}
*/


// ���� 6

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#define DATA 5

// ������ �Է�
void Input(int data[])
{
	printf("������ 5�� �Է�: ");
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

// ��������
void Asc(int data[], int len)
{
	for (int i = 0; i < len; i++)
		for (int j = i + 1; j < len; j++)
			if (data[i] > data[j])
				swap(&data[i], &data[j]);

	printf("\n��������: ");
	for (int i = 0; i < len; i++)
		printf("%d ", data[i]);
}

// ��������
void Desc(int data[], int len)
{
	for (int i = 0; i < len; i++)
		for (int j = i + 1; j < len; j++)
			if (data[i] < data[j])
				swap(&data[i], &data[j]);

	printf("\n��������: ");
	for (int i = 0; i < len; i++)
		printf("%d ", data[i]);
}

void MaxData(int data[], int len)
{
	int max = data[0];

	for (int i = 0; i < len; i++)
		if (max < data[i])
			max = data[i];

	printf("�ִ�: %d\n", max);
}

void MinData(int data[], int len)
{
	int min = data[0];

	for (int i = 0; i < len; i++)
		if (min > data[i])
			min = data[i];

	printf("�ּڰ�: %d\n", min);
}

void SumAndAvg(int data[], int len)
{
	int sum = 0;
	double avg = 0;

	for (int i = 0; i < len; i++)
		sum += data[i];

	printf("�հ�: %d\n", sum);

	avg = sum / len;

	printf("��հ�: %.2lf\n", avg);
}

void main()
{
	int data[DATA] = {};
	Input(data);

	int data_len = sizeof(data) / sizeof(int);   // �迭�� ���� = 5

	MaxData(data, data_len);
	MinData(data, data_len);
	SumAndAvg(data, data_len);

	printf("�Է¹��� �迭: ");
	for (int i = 0; i < data_len; i++)
		printf("%d ", data[i]);

	Desc(data, data_len);
	Asc(data, data_len);
}
*/


// ���� 7

/*
#include <stdio.h>
#define SUB 5

// ������ �Է�
void InputScore(int score[])
{
	printf("�ټ� ������ ���� �Է�: ");
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


// ���� 8

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

	printf("��÷ ��ȣ: ");
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
	printf("�ζ� ��ȣ(6��): ");
	scanf("%d %d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
}

void main()
{
	int num[NUM] = { 0 };
	int luck[NUM] = { 0 };

	InputNum(num);
	RandomNum(luck);
	int chknum = CheckNum(num, luck);
	printf("\n��ġ�ϴ� ��ȣ�� ����: %d", chknum);
}
*/