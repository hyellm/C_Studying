#include <stdio.h>
#include <string.h>

void main()
{
	int data[][4] = { {1, 20300104, 100, 80},
				{2, 20300804, 847, 37},
				{3, 20300401, 10, 8} };
	int data_tmp[3][4] = { 0 };

	char ext[20], sort_by[20];
	int val_ext, E, S;

	printf("exp : ");
	scanf("%s", &ext);
	printf("val_ext : ");
	scanf("%d", &val_ext);
	printf("sort_by : ");
	scanf("%s", &sort_by);
	
	if (strcmp(ext, "code") == 0)
		E = 0;
	else if (strcmp(ext, "date") == 0)
		E = 1;
	else if (strcmp(ext, "maximum") == 0)
		E = 2;
	else if (strcmp(ext, "remain") == 0)
		E = 3;

	if (strcmp(sort_by, "code") == 0)
		S = 0;
	else if (strcmp(sort_by, "date") == 0)
		S = 1;
	else if (strcmp(sort_by, "maximum") == 0)
		S = 2;
	else if (strcmp(sort_by, "remain") == 0)
		S = 3;

	int l = 0;

	for (int i = 0; i < 3; i++)
		if (data[i][E] < val_ext)
		{
			for (int k = 0; k < 4; k++)
			{
				data_tmp[l][k] = data[i][k];
			}
			l++;
		}

	//for (int i = 0; i < 3; i++)
	//	printf("[%d, %d, %d, %d]", data_tmp[i][0], data_tmp[i][1], data_tmp[i][2], data_tmp[i][3]);

	int tmp[4] = { 0 };
	int tmpnum = 0;

	for (int i = 0; i < l; i++)
	{
		for (int j = i + 1; j < l; j++)
		{
			if (data_tmp[i][S] > data_tmp[j][S])
			{
				for (int q = 0; q < 4; q++)
				{
					tmp[q] = data_tmp[i][q];
				}
				for (int q = 0; q < 4; q++)
				{
					data_tmp[i][q] = data_tmp[j][q];
				}
				for (int q = 0; q < 4; q++)
				{
					data_tmp[j][q] = tmp[q];
				}
			}
		}
	}

	printf("\nresult: ");
	for (int i = 0; i < l; i++)
	{
		printf("[%d, %d, %d, %d]", data_tmp[i][0], data_tmp[i][1], data_tmp[i][2], data_tmp[i][3]);

		//if (data_tmp[i][0] != 0)
		//	printf("[%d, %d, %d, %d]", data_tmp[i][0], data_tmp[i][1], data_tmp[i][2], data_tmp[i][3]);
	}
	printf("\n");
	
}