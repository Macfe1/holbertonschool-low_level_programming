#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: Pointer
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int longitd = 0;

	while (*s != '\0')
	{
		longitd++;
		s++;
	}

	return (longitd);
}

/**
 * _atoi - function
 *
 * @s: Pointer
 *
 * Return: temp
 */
int _atoi(char *s)
{
	int i = 0;
	int lenght = _strlen(s);
	unsigned int temp = 0;
	int signal  = 1;

	for (i = 0; i < lenght; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			temp = temp * 10 + (s[i] - 48);

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}

		if (s[i] == '-')
		{
			signal *= -1;
		}

		if (s[i] == '+')
		{
			signal *= 1;
		}

		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			continue;
		}
	}

	return (temp * signal);

}
