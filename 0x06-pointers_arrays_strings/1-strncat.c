#include "main.h"
/**
 * strncat - concatenates two strings
 * @dest: pointer to be updated
 * @src: pointer to be updated
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
