#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int n, i, j;

	printf("n을 입력하세요: ");
	scanf("%d", &n);

	for (i=n; i>=1; i--)
	{
		for (j = n-1; j >= i; j--) {
			printf(" ");
		}
		for (j = i-1; j >= 1; j--) {
			printf("*");
		}
		for (j = i; j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n202320798_황인성");

	return 0;
}