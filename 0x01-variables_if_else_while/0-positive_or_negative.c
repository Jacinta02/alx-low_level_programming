#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print positive or negative number
 *
<<<<<<< HEAD
 * Return: 0
=======
 *      Return: 0
>>>>>>> 43300fddcdfd446c9b15c6de536b064a5ac11e3d
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

=======
	if (n > 0)	
        n = rand() - RAND_MAX / 2;
        if(n > 0)
	printf("%d is positive\n", n);
        else if (n < 0)
	printf("%d is negative\n", n);
        else
	printf("%d is zero\n", n);
>>>>>>> 43300fddcdfd446c9b15c6de536b064a5ac11e3d
	return (0);
}
