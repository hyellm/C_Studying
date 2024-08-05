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

	// int의 sqrt와 double sqrt가 같으면 n^2인 것

	if (sqrt_n_int == sqrt_n_double)  // == n이 x의 제곱
		printf(">> %.f", pow(x, 2));  // pow는 double or float처럼 소수만 취급하는듯
	else
		printf(">> -1");
}