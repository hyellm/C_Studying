#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int n = 0, h = 0, w = 0; // �迭 ũ�⸦ ������ ����
	int count = 0;
	int dh[4] = { 0, 1, -1, 0 }, dw[4] = { 1, 0, 0, -1 };
	int h_check = 0, w_check = 0;

	printf("n �Է�: ");
	scanf("%d", &n);
	//n = 4;

	// char a = getchar();  // ���� �ϳ� ����
	char** board = (char**)calloc(n, sizeof(char*));

	for (int i = 0; i < n; i++)
	{
		board[i] = (char*)calloc(n + 1, sizeof(char));
		gets_s(board[i], n + 1);
	}
	
	/*strcpy(board[0], "bror");
	strcpy(board[1], "rrbo");
	strcpy(board[2], "borr");
	strcpy(board[3], "oorb");*/

	printf("h, w �Է�: ");
	scanf("%d %d", &h, &w);

	for (int i = 0; i < 4; i++)
	{
		h_check = h + dh[i];
		w_check = w + dw[i];

		if ((0 <= h_check) && (h_check < n) && (0 <= w_check) && (w_check < n))
		{
			if (board[h][w] == board[h_check][w_check])
				count++;
		}
	}

	printf("���� ���� ��: %d", count);
	
	for (int i = 0; i < n; i++)
		free(board[i]);

	free(board);
}