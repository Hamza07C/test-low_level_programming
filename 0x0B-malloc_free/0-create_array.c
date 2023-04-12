#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an aray of chars.
 * @size: size of the array.
 * @a: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char a)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(a) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = a;

	return (cr);
}
