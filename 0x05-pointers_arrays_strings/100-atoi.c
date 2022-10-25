#include<stdio.h>
#include "main.h"
/**
 * _atoi - convert string to integer
 * @s:string to be converted
 * Return:0 or converted int
 */

int _atoi(char *s)
{
	int i, first, res;

	i = 0;
	first = 0;
	res = 1;
	while (s[i])
	{
		if (s[i] == '-')
		{
			res = res * -1;
		} else if (s[i] == '+')
		{
			res = res * 1;
		}
		if ((s[i] >= '0' && s[i] <= '9'))
		{
			if (first == 0)
			{
				res = res * (s[i] - 48);
			} else if (first == 1)
			{
				if (res * 10 < 0)
				{
					res = res * 10 - (s[i] - 48);
				} else
				{
					res = res * 10 + (s[i] - 48);
				}
			}
			first = 1;
			if ((s[i + 1] >= '0' && s[i + 1] <= '9') == 0)
			{
				break;
			}
		}
		i++;
	}
	return ((first == 0) ? 0 : res);
}
