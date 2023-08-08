#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -returns pointer to a new string, duplicate of the string str
 * @str: char
 *
 * Return: always 0
 */

char *_strdup(char *str)
{
	char *bbb;
	int j, r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	bbb = malloc(sizeof(char) * (j + 1));

	if (bbb == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		bbb[r] = str[r];

	return (bbb);
}
