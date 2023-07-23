#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: the num to be checked
* Return: 1 for +ve num, -1 for -ve num and 0 for anything else
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
	}
	return (-1);
}

