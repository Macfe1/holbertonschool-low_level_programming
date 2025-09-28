#include "main.h"

/**
 * cap_string - function
 *
 * @s:pointer
 *
 * Return: s
 */
char *cap_string(char *s)

{
	int i = 0;
	int j = 0;
	char cadena[] = ",;.!?\"(){}' '";

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; cadena[j] != '\0'; j++)
		{
			if ((s[i] == cadena[j] || s[i] == ' ' || s[i] == '\n' || s[i] == '\t') &&
				(s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
