#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: parameter
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int p, space;

	if (n > 0)
	{
		for (p = 0; p < n; p++)
		{
			for (space = 0; space < p; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (p == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
