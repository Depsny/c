#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	int x, y;
	char op;

	printf("������ �Է��ϼ���: ");
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
		
			printf("�������� �ʴ� �������Դϴ�.");
		}

	printf("\n202320798_Ȳ�μ�");

	return 0;
}