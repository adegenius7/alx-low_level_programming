#include <unistd.h>
#include "main.h"

/**
 * print_sign- prints desired signs according to condition
 *
 * Return: returns 1 for success
 * @n: number to be tested
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar ('0');
	}
	else
	{
		return (-1);
		_putchar ('-');
	}
}
