#include "main.h"
/**
 * _isapha - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Description: check if c is a lowercase or uppercase letter
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
