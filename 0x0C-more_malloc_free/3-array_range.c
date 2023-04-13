#include "main.h"
#include <stdlib.h>

/**
 * array_range - Main Entry
 * @min: input
 * @max: input
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i, len;
	int *a;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
