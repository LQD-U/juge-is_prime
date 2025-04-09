#include<stdbool.h>
#include<stdio.h>

bool is_prime(int num)
{
	int i;

		for (i = 2; i * i <= num; i++)
		{
			if (num % i == 0 || num <= 1)
				return false;
			else
				return true;
		}
}




int main()
{
	int num;

	printf("Enter a number:");
	scanf("%d", &num);
	if (is_prime(num))
		printf("Prime");
	else
		printf("Not prime");

	return 0;
}