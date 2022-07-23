#include <stdio.h>

/**
 *main- where program starts
 *@argc: size of argv
 *@argv: strings of array
 *Return: Alwys 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
