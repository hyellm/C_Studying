#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


// problem 1

/*
void input(int a[])
{
	printf("[10���� ���� �Է�]\n");
	for (int i = 0; i < 10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &a[i]);
	}
}

void printODD(int a[])
{
	printf("Ȧ��: ");
	for (int i = 0; i < 10; i++)
	{
		if ((a[i] % 2) == 1)
			printf("%d ", a[i]);
	}
}

void printEVEN(int a[])
{
	printf("\n¦��: ");
	for (int i = 0; i < 10; i++)
	{
		if ((a[i] % 2) == 0)
			printf("%d ", a[i]);
	}
}

void main()
{
	int arr[10] = { 0 };

	input(arr);
	printODD(arr);
	printEVEN(arr);
}
*/


// problem 2

/*
#define MAX 50

int input()
{
	int n = 0;
	printf("10���� ���� �Է�: ");
	scanf("%d", &n);

	return n;
}

void bin(int n, int bn[])
{
	int N = n;
	int c = 0;

	for (int i = 0; i < MAX; i++)
	{
		if (N == 0)
			break;
		else
		{
			bn[c] = N % 2;
			N = N / 2;
		}
		c++;
	}

	for (int i = (c - 1); i >= 0; i--)
		printf("%d", bn[i]);
}

void main()
{
	int bn[MAX] = { 0 };

	int n = input();
	bin(n, bn);
}
*/