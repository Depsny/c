#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int n, sum=0;

	do
	{
		sum = 0;
		printf("���� ������ �Է��ϼ���: ");
		scanf("%d", &n);
		for (int i = 0; i <= n; i++)
			sum += i;

			printf("1 ~ %d ��: %d\n", n, sum);
			
	} while (n != 0);

	printf("\n202320798_Ȳ�μ�");

	return 0;
}