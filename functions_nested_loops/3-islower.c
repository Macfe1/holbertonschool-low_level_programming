#include "main.h"

/**
* _islower - Returns 1 if c is lowercase, otherwise 0.
*
* @c: number
*
* Return:0 or 1
*/
int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

