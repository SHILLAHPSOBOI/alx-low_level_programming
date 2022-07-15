#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to be updated
 * @src: pointer to be updated
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
