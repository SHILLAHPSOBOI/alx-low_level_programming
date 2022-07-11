#include "main.h"

/**
 * _strlen - length of a string
 * @s: pointer to be updated
 *
 * Return: void
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
