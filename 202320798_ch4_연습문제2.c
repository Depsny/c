#include <stdio.h>
int main(void)
{
	int age, fee;
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);

	if (age<5)
	{
		fee = 0;
	}
	else if(age >= 5 && age <= 14 && age >= 60)
	{
		fee = 5000;
	}
	else
	{
		fee = 10000;
	}

	printf("���: %d��\n", fee);

	printf("\n202320798_Ȳ�μ�");

	return 0;
}