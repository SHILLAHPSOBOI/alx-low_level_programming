#include "main.h"

/**
 * _strlen - length of a string
 * @s: pointer to be updated
 *
 * Retuen: void
 */

int_strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
