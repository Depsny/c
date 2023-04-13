#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	int x, y;
	char op;

	printf("수식을 입력하세요: ");
	scanf("%d %c %d", &x, &op, &y);

		switch (op)
		{
		case '+':
			printf("%d + %d = %d", x, y, x + y);
			break;

		case '-':
			printf("%d - %d = %d", x, y, x - y);
			break;

		case '*':
			printf("%d * %d = %d", x, y, x * y);
			break;

		case '%':
			printf("%d %% %d = %d", x, y, x % y);
			break;

		case '/':
			printf("%d / %d = %d", x, y, x / y);
			break;
		
		default:
		
			printf("지원되지 않는 연산자입니다.");
		}

	printf("\n202320798_황인성");

	return 0;
}