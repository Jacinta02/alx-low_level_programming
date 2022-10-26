#include<stdio.h>
/**
 * main - printing a-z
 *
 * Return:0(success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i != j && i < j)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
