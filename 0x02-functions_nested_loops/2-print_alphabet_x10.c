#include "main.h"
/**
 * main - program that prints 10 times the alphabets
 *
 * return: always 1 (success)
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
