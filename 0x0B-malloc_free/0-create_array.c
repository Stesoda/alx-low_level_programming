#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and assigns it with a specific char
 * @size: size of the array
 * @c: the char to be assigned
 * Description: creates array of size size and assigns char c
 * Return: a pointer to array, NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *strn;
	unsigned int j;

	strn = malloc(sizeof(char) * size);
	if (size == 0 || strn == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		strn[j] = c;
	return (strn);
}
