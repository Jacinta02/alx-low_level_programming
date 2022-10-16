#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print positive or negative number
 *
<<<<<<< HEAD
 * Return: 0
 */ 
=======
 *      Return: 0
 */
>>>>>>> 54af0179b59b757d8de9c76585ac0217071930f7
int main(void)
{
	int n;

	srand(time(0));
<<<<<<< HEAD
	n = rand() - RAND_MAX / 2;
	if (n > 0)	
=======
        n = rand() - RAND_MAX / 2;
        if(n > 0)
>>>>>>> 54af0179b59b757d8de9c76585ac0217071930f7
	printf("%d is positive\n", n);
        else if (n < 0)
	printf("%d is negative\n", n);
<<<<<<< HEAD
 	else
    		printf("%d is zero\n", n);
return (0);
=======
        else
	printf("%d is zero\n", n);
	return (0);
>>>>>>> 54af0179b59b757d8de9c76585ac0217071930f7
}
