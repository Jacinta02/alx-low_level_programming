#include "main.h"

/**
 * _puts - write to stdout
 *  @str: string to print
 *  Return:0
 */

void _puts(char *str)
{
int i;

	i = 0;
	while (str[i])
	{	_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
