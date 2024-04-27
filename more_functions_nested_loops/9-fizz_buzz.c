#include <stdio.h>

/**
 * main - to print numbers from 1 to 100 except for multiples of three and 5.
 *
 * Return: 0
 */
int main(void)
{
	int index;

	for (index = 1; index <= 100; index++)

	{
		if (index % 5 == 0 && index % 3 == 0)

		{
			printf("FizzBuzz ");
		}

		else if (index % 3 == 0)

		{
			printf("Fizz ");
		}

		else if (index % 5 == 0)

		{
			printf("Buzz ");
		}

		else

		{
			printf("%d ", index);
		}

		if (index < 100)

		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
