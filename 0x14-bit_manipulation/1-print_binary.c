#include"main.h"

/**
 * print_binary - function to print binary representation of a num
 * @n: number
 * return: binary number
 */

void print_binary(unsigned long int n)
{
int binary;

if (n >> 1)
print_binary(n >> 1);
/* get the last bit of the number */
binary = n & 1;
putchar(binary + '0');
}


