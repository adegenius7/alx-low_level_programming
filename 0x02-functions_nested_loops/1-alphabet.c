#include "main.h"
#include <unistd.h>

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

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
	return (0);
}
