#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	int x, y, z;

	printf("3개의 주사위 눈을 입력하세요: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x == y && x == z)
		printf("1%d000", x);
	else if (x == y && x != z)
		printf("1%d00", x);
	else if (x == z && x != y)
		printf("1%d00", x);
	else if (y == z && y != x)
		printf("1%d00", y);
	else if (x > y && x > z)
		printf("%d00", x);
	else if (y > x && y > z)
		printf("%d00", y);
	else if (z > x && z > y)
		printf("%d00", z);



	printf("\n202320798_황인성");

	return 0;
}