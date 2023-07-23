#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
