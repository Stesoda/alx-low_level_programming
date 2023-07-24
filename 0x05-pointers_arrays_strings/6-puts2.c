#include "main.h"

/**
 * puts2 - prints every other char of a string, starting with the first char
 * @str: string to be computed
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
