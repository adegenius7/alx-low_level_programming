#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup- is the address of the first character
 *@str: size of array
 *Return:success
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
