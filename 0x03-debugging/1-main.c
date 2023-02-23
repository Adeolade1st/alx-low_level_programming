#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0; /* This line initiates the start of the loop */

while (i < 10) /* This line is the cause of the infinite loop */
{
putchar(i);
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}
