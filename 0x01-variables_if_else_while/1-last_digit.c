#include <stdlib.h>
#include <time.h>
/* main - This program will assign a random number to the variable n */

/*description: assign random numbers */

/* return: 0 (success) */
int main(void)
{
	int n;

	srand(time(0);
	n = rand() - RAND_MAX / 2;

	 printf("Please Enter digit:" ");
	 scanf( " % d ", &n );
	 if ( n > 5 )
	 {
	 printf("and is greater than 5\n");
	 }
	 else if ( n == 0 )
	 printf("and is 0\n");
	 {
	 else if ( n<6 && n !=0 )
	 printf("and is less than 6 and not 0\n);
	 }

	return (0);
}
