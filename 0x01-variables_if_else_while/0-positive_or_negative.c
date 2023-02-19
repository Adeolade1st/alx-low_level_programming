#include <stdlib.h>
#include <time.h>
/* Description: A conditional program to print positive, zero and negative number */

/* main- The program begins here */

/* return: 0 (success) */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        { 
	printf("Input a number:");
	scanf("%d", &n);
	(n > 0);
	printf("%d is positive \n", n);
	(n = 0);
	scanf("%d", &n);
	printf("%d is zero \n", n);
	(n < 0);
	scanf("%d", &n):;
	printf("%d is negative \n", n);
        return (0);
	}
