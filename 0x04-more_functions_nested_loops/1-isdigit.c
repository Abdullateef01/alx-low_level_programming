#include "main.h"

/**
 * _isdigit - print 1 if character is digit,otherwise 0
 * Return: return 1 if digit,otherwise 0
 * @c: The number to be checked.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
