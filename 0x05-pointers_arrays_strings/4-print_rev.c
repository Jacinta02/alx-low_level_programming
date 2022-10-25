
#include "main.h"

/**
 * print_rev - print a reverse of a string
 * @s:String to print in reverse
 * Return:0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	i--;
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
