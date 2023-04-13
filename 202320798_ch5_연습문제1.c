#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int menu = 0;

	do
	{
		printf("메뉴를 입력하세요(1~3): ");
		scanf("%d", &menu);
	} while (menu != 1 && menu != 2 && menu != 3);

	printf("선택한 메뉴는 %d번 입니다.\n", menu);

	printf("\n202320798_황인성");

	return 0;
}