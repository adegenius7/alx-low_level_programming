#include <unistd.h>
#include "main.h"

/**
 *_isalpha- function where program starts
 *
 * @c: the alphabet to be tested
 *
 * Return: 1 if it is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
