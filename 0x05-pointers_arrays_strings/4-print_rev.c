#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: pointer updated
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i = 1 - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
