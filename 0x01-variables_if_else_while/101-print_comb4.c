#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int L, R, C;

	for (L = 48; L <= 57; L++)
	{
		for (C = L + 1; C <= 57; C++)
		{
			for (R = C + 1; R <= 57; R++)

			{
				putchar(L);
				putchar(C);
				putchar(R);
				
		if ((L == 55) && (C == L + 1) && (R == C + 1))
					{
						break;
					}

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
