#include "main.h"
#include <stdlib.h>

/**
 * argstostr - the main entry
 * @ac: Int input
 * @av: Double pointer array
 * Return: always 0
 */

char *argstostr(int ac, char **av)
{
	int j, n, r = 0, l = 0;
	char *strn;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (n = 0; av[j][n]; n++)
			l++;
	}
	l += ac;

	strn = malloc(sizeof(char) * l + 1);
	if (strn == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (n = 0; av[j][n]; n++)
	{
		strn[r] = av[j][n];
		r++;
	}
	if (strn[r] == '\0')
	{
		strn[r++] = '\n';
	}
	}
	return (strn);
}
