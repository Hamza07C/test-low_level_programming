#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @A: string
 * Return: no return.
 */
void _puts_recursion(char *A)
{
	if (*A != '\0')
	{
		_putchar(*A);
		_puts_recursion(A + 1);
	}
	else
		_putchar('\n');
}
