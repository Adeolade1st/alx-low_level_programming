#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always (0) success
 */

int main(void)

{

int a;
char tru;

for (a = '0'; a <= '9'; a++)
putchar(a);

for (tru = 'a'; tru <= 'f'; tru++)
putchar(tru);
putchar('\n');

return (0);

}
