#include "main.h"

/**
 * _puts - prints string
 * @str: pointer to be updated
 *
 * Return: void
 */

voi _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m =0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar ('\n');
}
