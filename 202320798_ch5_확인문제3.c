#include <stdio.h>
int main(void)
{
	double a, sum = 0, result = 0;
	double c = 0;

		while(1)
	{
		printf("점수 입력: ");
		scanf("%lf", &a);
		c++;
		sum += a;
		
		if (a < 0)
			break;
	}
		sum = sum - a;
		c = c - 1;
		printf("평균: %lf", sum / c);

	printf("\n202320798_황인성");

	return 0;
}