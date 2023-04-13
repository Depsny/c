#include <stdio.h>
int main(void)
{
	int month;

	printf("년도의 월(month)을 입력 : ");
	scanf_s("%d", &month);

	switch (month) {
	case 1: case 2: case 3:
		printf("%d월은 1사분기입니다.\n", month);
		break;

	case 4: case 5: case 6:
		printf("%d월은 2사분기입니다.\n", month);
		break;

	case 7: case 8: case 9:
		printf("%d월은 3사분기입니다.\n", month);
		break;

	case 10: case 11: case 12:
		printf("%d월은 4사분기입니다.\n", month);
		break;
	}
		printf("\n202320798_황인성");

	return 0;
}