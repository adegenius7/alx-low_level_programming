#include "main.h"
#include <stdio.h>

/**
 **_strncat- our function for concactenation
 *@dest: destination string
 *@src: source string
 *@n: number considered
 *Return: dest is returned
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, n;

	i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j <= n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0'
		return (dest);
}
