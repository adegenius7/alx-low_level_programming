#include "main.h"

/**
 * main - where program starts
 * my function is in my header file
 *
 * Return: 0 alwyas as success
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
