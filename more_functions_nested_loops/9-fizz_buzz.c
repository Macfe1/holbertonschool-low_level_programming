#include <stdio.h>

int main(void)
{
	int index;

	for (index = 1; index <= 100; index++)

	{
		if (index % 5 == 0 && index % 3 == 0)

		{
			printf("FizzBuzz ");
		}

		if (index % 3 == 0)

		{
			printf("Fizz ");
		}

		if (index % 5 == 0)

		{
			printf("Buzz ");
		}

		printf("%d ", index);

	}

	return (0);
}
