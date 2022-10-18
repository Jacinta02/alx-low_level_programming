#include <stdio.h>

/**
 * main - prints alpha in lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{	
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
