#include <stdio.h>
/**
 * main - Prints the alphabetic
 *
 * Retun: Always (success)
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\1');
return (0);


}

