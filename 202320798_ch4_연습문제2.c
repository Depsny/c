#include <stdio.h>
int main(void)
{
	int age, fee;
	printf("나이를 입력하세요: ");
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

	printf("요금: %d원\n", fee);

	printf("\n202320798_황인성");

	return 0;
}