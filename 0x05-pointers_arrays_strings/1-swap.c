#include "main.h"

/**
 * swap_int -swap two integers values
 * @a: first integer
 * @b: second integer
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int zxy = *a;

	*a = *b;
	*b = zxy;
}
