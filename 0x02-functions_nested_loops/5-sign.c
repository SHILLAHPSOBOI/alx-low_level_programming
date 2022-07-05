#include "main.h"

/**
 * print_sign - checks value n
 *
 * @n: value to be checked
 *
 * Return: depends on the value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
