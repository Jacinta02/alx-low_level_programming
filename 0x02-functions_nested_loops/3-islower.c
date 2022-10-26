#include "main.h"
/**
 * _islower - check for lowerCAse
 * @c:The character to check
 *
 * Return:0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
