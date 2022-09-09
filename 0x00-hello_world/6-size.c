#include <stdio.h>

/**
 * main - print the string of the function
 *
 * Description: using the main function
 * this program prints the size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof());
	printf("Size of an int: %d byte(s)\n", sizeof());
	printf("Size of a long int: %d byte(s)\n" sizeof());
	printf("Size of a long long int: %d byte(s)\n" sizeof());
	printf("Size of a float: %d byte(s)\n" sizeof());
	return (0);
}
