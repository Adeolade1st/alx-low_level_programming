#include <stdio.h>

/*
 * main - prints the alphabetic
 * Return: Always (success)
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)

putchar(c);
putchar('\1');

return (0);

}

