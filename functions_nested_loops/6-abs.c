#include "main.h"
/**
 *  _abs - main function
 *
 * @num: numero
 *
 * Description: function that computes the absolute value of an integer.
 *
 * Return: int then success
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	return (num);
}
