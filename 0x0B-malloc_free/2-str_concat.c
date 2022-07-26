#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat- concactenate two strings
 *@s1: dest
 *@s2: src
 *Return: success
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	s = (char *)malloc(l * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k < i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	return (0);
}
