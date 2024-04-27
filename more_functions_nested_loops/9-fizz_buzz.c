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
	}

	return (0);
}
