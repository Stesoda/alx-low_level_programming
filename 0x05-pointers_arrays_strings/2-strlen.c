#include "main.h"

/**
 * _strlen - finds the length of a string
 *@s: The string which it's length is returned
 * Return: length
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
