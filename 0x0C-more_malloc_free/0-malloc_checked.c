#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *malloc_checked- memory to be checked
 *@b: first argument
 *
 *Return: value should be 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
