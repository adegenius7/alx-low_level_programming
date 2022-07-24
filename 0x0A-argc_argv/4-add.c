#include <stdio.h>
#include <stdlib.h>

/**
 *main- program starts
 *@argc: size of vector
 *sum: sum=sum + atoi(argv[])
 *is same as sum += atoi(argv[])
 *@argv: argument vector
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j, k, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
