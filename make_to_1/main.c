#include <stdio.h>

void main()
{
	long long n = 0;  // ���� �ʹ� Ŀ���� �����÷ο�
	int cnt = 0;

	printf("n = ");
	scanf("%lld", &n);

	if (n == 1)
		printf(">> 0");

	while (1)
	{
		if (n == 1)
			break;

		if (n % 2 == 0)  // ¦��
		{
			n = n / 2;
			cnt++;
		}
		else
		{
			n = (n * 3) + 1;
			cnt++;
		}
	}

	if (cnt >= 500)
		printf(">> -1");
	else
		printf(">> %d count", cnt);
}