#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints alphabet in lowercase and uppercase
=======
 * main - prints alphabets in lowercase and uppercase
>>>>>>> 7c41011cecdce6eebf56d1bc9169d06dd29fd047
 *
 * Return: Always 0
 */
int main(void)
<<<<<<< HEAD
{	char ch;
=======
{	
	char ch;
>>>>>>> 7c41011cecdce6eebf56d1bc9169d06dd29fd047
	
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
