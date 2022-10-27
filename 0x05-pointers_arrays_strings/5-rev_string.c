#include "main.h"

/**
 * rev_string - reverse a string
 * @s:String to reverse
 * Return:0
 */

void rev_string(char *s)
{
	int i, j, k;

	char t;

	j = 0;
	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	k = i / 2;
	while (i > k)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		j++;
		i--;
	}
}
