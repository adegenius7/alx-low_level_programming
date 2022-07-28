#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_calloc- calloc library internally implemented
 *@nmemb: param 1
 *@size: param 2
 *Return: always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filter;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
	{
		return (NULL);
	}
	filler = mem;
	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}
	return (mem);
}
