#include "main.h"

/**
* _abs - computes the absolute value of a number
* @x: the number to be computed
* Return: the absolute value of the number or zero
*/

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	return (-x);
}
