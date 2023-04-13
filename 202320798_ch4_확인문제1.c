#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	int x, y;

	printf("a와 b를 입력하세요: ");
	scanf("%d %d", &x, &y);

	if (x > y)
		printf("%d > %d", x, y);
    else if(x < y)
			printf("%d < %d", x, y);
	else
		printf("%d == %d", x, y);

	printf("\n202320798_황인성");

	return 0;
}