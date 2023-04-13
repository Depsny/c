#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int i;
	char j;

	for (i=1; i<=5; i++)
	{
		for (j = 65; j <= 64+i; j++)
			printf("%c", j);
		printf("\n");
	}

	printf("\n202320798_È²ÀÎ¼º");

	return 0;
}