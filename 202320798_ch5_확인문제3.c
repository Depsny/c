#include <stdio.h>
int main(void)
{
	double a, sum = 0, result = 0;
	double c = 0;

		while(1)
	{
		printf("���� �Է�: ");
		scanf("%lf", &a);
		c++;
		sum += a;
		
		if (a < 0)
			break;
	}
		sum = sum - a;
		c = c - 1;
		printf("���: %lf", sum / c);

	printf("\n202320798_Ȳ�μ�");

	return 0;
}