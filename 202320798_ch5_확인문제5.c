#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int n, sum = 0;

	printf("n�� �Է��ϼ���: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		if (i % 4 == 0)
			sum += 0;
		else if (i % 4 == 1)
			sum += 0;
		else if (i % 4 == 2)
			sum += i;
		else if (i % 4 == 3)
			sum += 0;
	}
	printf("%d", sum);

	printf("\n202320798_Ȳ�μ�");

	return 0;
}