#include <stdio.h>

/**
 *main - program always starts here
 *
 *Return : Always return 0 with success
 *
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; --a)
	{
		putchar(a);

		putchar('\n');
	}
	return (0);
}
