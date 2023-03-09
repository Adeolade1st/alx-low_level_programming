#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints string
 * @s: String to be printed
 * return: s
 */

void _puts_recursion(char *s)


{

if (*s == '\0')

{
putchar('\n');
}

else
{
putchar(*s);
_puts_recursion(++s);

}

}
