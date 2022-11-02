#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is srt appropriately.
 */
int _putchar(char_c)
{
	return (write(1, &c, 1));
}
