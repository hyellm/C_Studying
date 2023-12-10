#include <stdio.h>
// #include <math.h>

#define LANGUAGE 3
#define STUDENT 6
#define C_SCORE 80
// enum 

void main()
{
	float python_avg = 0;
	char name[6][20] = { "상민", "찬익", "동현", "동욱", "예주", "혜진" };
	char lang[3][20] = { "C언어", "JAVA", "python" };
	int score[3][6] = { {100, 90, 50, 60, 90, 100},
						{90, 80, 90, 100, 100, 60},
						{80, 60, 100, 90, 90, 80} };


	// 1. 파이썬 평균 이하인 학생들 이름 출력
	for (int i = 0; i < 6; i++)
		python_avg += score[2][i];

	python_avg = python_avg / STUDENT;

	printf("[1] 파이썬 평균 이하인 학생 : ");
	for (int i = 0; i < 6; i++)
	{
		if (score[2][i] <= python_avg)
			printf("%s ", name[i]);
	}

	// 2. C 언어가 80점 이하인 학생
	printf("\n[2] C 언어가 80점 이하인 학생 : ");
	for (int i = 0; i < 6; i++)
	{
		if (score[0][i] <= C_SCORE)
			printf("%s ", name[i]);
	}

	// 3. 각 과목의 100점인 학생 과목별로 출력
	printf("\n[3] 각 과목의 100점인 학생 : ");
	for (int i = 0; i < 3; i++)
	{
		printf("\n    %s) ", lang[i]);
		for (int j = 0; j < 6; j++)
		{
			if (score[i][j] == 100)
				printf("%s ", name[j]);
		}
	}

	// 4. idx == 1 학생의 과목별 석차
	printf("\n[4] idx == 1 학생의 과목별 석차 : ");

	for (int i = 0; i < 3; i++)
	{
		int x = 1;
		printf("\n    %s) ", lang[i]);

		for (int j = 0; j < 6; j++)
			if (score[0][1] < score[i][j])
				x++;

		printf("%d등", x);
	}

	// 5. 파이썬의 순위 idx 순서대로 출력
	printf("\n[5] 파이썬의 순위 idx 순서대로 출력 : \n    ");
	for (int i = 0; i < 6; i++)
	{
		int x = 1;

		for (int j = 0; j < 6; j++)
			if (score[2][i] < score[2][j])
				x++;

		printf("%d등 ", x);
	}

	// 6. idx == 3 학생의 과목별 석차
	printf("\n[6] idx == 3 학생의 과목별 석차 중 가장 낮은 과목 : ");
	int st3_x[3] = { 0 };
	int x = 1, y = st3_x[0];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
			if (score[i][3] < score[i][j])
				x++;

		st3_x[i] = x;
	}

	for (int i = 1; i < 3; i++)
		if (st3_x[0] > st3_x[i])
			y = st3_x[i];

	printf("%d", y);

	// 7. 50점 이하를 받은 학생, 과목 출력
	printf("\n[7] 50점 이하를 받은 학생, 과목 : \n    ");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 6; j++)
			if (score[i][j] <= 50)
				printf("학생(과목) : %s (%s) ", name[j], lang[i]);

	// 8. 과목별 평균, 전과목 합산 평균 출력
	printf("\n[8] 과목 별 평균, 전과목 합산 평균 : \n");

	float c_avg = 0, java_avg = 0, all_avg = 0;

	for (int i = 0; i < 6; i++)
	{
		c_avg += score[0][i];
		java_avg += score[1][i];
	}

	c_avg = c_avg / STUDENT;
	java_avg = java_avg / STUDENT;
	all_avg = (python_avg + c_avg + java_avg) / LANGUAGE;
	float avg[3] = { c_avg, java_avg, python_avg };

	for (int i = 0; i < 3; i++)
		printf("    %s : %.1f\n", lang[i], avg[i]);
	printf("    ALL : %.1f\n", all_avg);

	// 9. 학생들의 전과목 평균 점수
	printf("\n[9] 학생들의 전과목 평균 점수 :");
	float std_avg = 0;
	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < 3; i++)
			std_avg += score[i][j];

		std_avg = std_avg / LANGUAGE;

		printf("\n    %s : %.1f", name[j], std_avg);
	}


	// 10. 학생들의 과목별 석차 전체 출력
	printf("\n[10] 학생들의 과목별 석차 :");
	int std_x[3][6] = { 0 };
	// y = std_x[0][0];
	int yy = 0;

	for (int z = 0; z < 6; z++)
	{
		printf("\n    %s : ", name[z]);

		int xx = 0;
		for (int i = 0; i < 3; i++)
		{
			int x = 1;
			for (int j = 0; j < 6; j++)
				if (score[xx][yy] < score[i][j])
					x++;

			std_x[xx][yy] = x;
			printf("%d %d\n", x, std_x[xx][yy]);
			xx++;
		}
		yy++;
	}

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 6; j++)
			printf("%d ", std_x[i][j]);
	// printf("\n         %s) %d", lang[i], std_x[i][j]);

}