#include <stdio.h>
#include <math.h>

void main()
{
	int n = 0, sqrt_n_int = 0;
	double sqrt_n_double = 0;

	printf("n = ");
	scanf("%d", &n);

	sqrt_n_int = sqrt(n);
	sqrt_n_double = sqrt(n);

	int x = (sqrt_n_int + 1);

	// int�� sqrt�� double sqrt�� ������ n^2�� ��

	if (sqrt_n_int == sqrt_n_double)  // == n�� x�� ����
		printf(">> %.f", pow(x, 2));  // pow�� double or floató�� �Ҽ��� ����ϴµ�
	else
		printf(">> -1");
}