#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int menu = 0;

	do
	{
		printf("�޴��� �Է��ϼ���(1~3): ");
		scanf("%d", &menu);
	} while (menu != 1 && menu != 2 && menu != 3);

	printf("������ �޴��� %d�� �Դϴ�.\n", menu);

	printf("\n202320798_Ȳ�μ�");

	return 0;
}