#include "main.h"
/**
 * print_alphabet_x10 - make alphabet x10 times
 *
 * return: void
 *
 */

void print_alphabet_x10(void)

{
char b;
int i = 0;

while (i <= 10)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
i++;
}

}
