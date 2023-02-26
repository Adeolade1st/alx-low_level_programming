#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * return: Always (0) success
 */

int main(void)

{

int bay;

for (bay = '0'; bay <= 9; bay++)
{
putchar(bay);
if (bay != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);

}
