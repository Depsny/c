#include <stdio.h>
int main(void)
{
	int n;
	printf("n�� �Է��ϼ���: ");
	scanf("%d", &n);

	for (int i = 1; i<=n; i++){
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n202320798_Ȳ�μ�");

	return 0;
}