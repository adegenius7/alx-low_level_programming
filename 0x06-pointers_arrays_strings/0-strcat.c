#include "main.h"
#include <stdio.h>

/**
 * *_strcat - check the code
 *@dest: destination string
 *@src: source string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0' && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
return (dest);
}
