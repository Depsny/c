#include <stdio.h>
int main(void)
{
	int month;

	printf("�⵵�� ��(month)�� �Է� : ");
	scanf_s("%d", &month);

	switch (month) {
	case 1: case 2: case 3:
		printf("%d���� 1��б��Դϴ�.\n", month);
		break;

	case 4: case 5: case 6:
		printf("%d���� 2��б��Դϴ�.\n", month);
		break;

	case 7: case 8: case 9:
		printf("%d���� 3��б��Դϴ�.\n", month);
		break;

	case 10: case 11: case 12:
		printf("%d���� 4��б��Դϴ�.\n", month);
		break;
	}
		printf("\n202320798_Ȳ�μ�");

	return 0;
}