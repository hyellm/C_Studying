// 문제 1

#include <stdio.h>
#include <stdlib.h>

#define ACCOUNT 5
#define MAX_LEN 20

void main()
{
	// 동적 할당
	//char** ID = (char**)calloc(ACCOUNT, sizeof(char*));

	//for (int i = 0; i < ACCOUNT; i++)
	//	ID[i] = (char*)calloc(MAX_LEN, sizeof(char));

	char ID[ACCOUNT][MAX_LEN] = { "" };
}