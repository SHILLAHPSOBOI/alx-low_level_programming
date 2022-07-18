#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - search string for a set of bytes
 * @s: string
 * @accept: contains bytes to search
 *
 * Return: string or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL)
}
