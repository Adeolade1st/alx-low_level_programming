#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: the string to print
 * return: 0
 */
void print_rev(char *s)
{

int c = 0;
int o;

while (*s != '\0')
{
c++;
s++;
}
s--;
for (o = c; o > 0; o--)
{
_putchar("*s");
s--;
}
_putchar('\n');
}

