#include <stdio.h>
#include <stdlib.h>

/**
 *main- main program
 *@argv: vectors
 *@argc: number of arguments
 *c:numbers
 *d: numbers
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	signed long long int d, c;
	signed long long int result;

	c = atoi(argv[1]);
	d = atoi(argv[2]);
	result = (c * d);

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		printf("%d\n", result);
		return (0);
	}
}
