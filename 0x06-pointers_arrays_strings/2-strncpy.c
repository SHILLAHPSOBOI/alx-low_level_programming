#include "main.h"
/**
 * _strncpy - copies string
 * @dest: pointer to be updated
 * @src: pointer to be updated
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = scr[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);

}
