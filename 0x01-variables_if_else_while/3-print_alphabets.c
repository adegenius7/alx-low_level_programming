#include <stdio.h>

/**
 * main - program executed here
 *
 * Return: 0
 *
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}

	return (0);
}
