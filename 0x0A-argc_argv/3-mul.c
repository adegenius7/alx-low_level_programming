#include <stdio.h>
#include <stdlib.h>

/**
 *main- main program
 *@argv: vectors
 *@argc: number of arguments
 *c:numbers
 *d: numbers
 *a: error
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int d, c;
	int result;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		c = atoi(argv[1]);
		d = atoi(argv[2]);
		result = c * d;

		printf("%d\n", result);
	}
	return (0);
}
