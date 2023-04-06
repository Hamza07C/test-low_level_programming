#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @a: string
 * Return: no return.
 */
void _print_rev_recursion(char *a)
{
	if (*a != '\0')
	{
		_print_rev_recursion(a + 1);
		_putchar(*a);
	}
}
