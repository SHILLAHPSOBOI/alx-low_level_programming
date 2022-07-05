#include "main.h"

/**
 * _islower - checks for lowercase
 * Return: 1 or 0
 *@c: value to be checked
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
