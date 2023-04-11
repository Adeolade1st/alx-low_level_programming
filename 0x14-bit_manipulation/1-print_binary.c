#include<stdio.h>
#include"main.h"

/**
 * print_binary - function to print binary representation of a num
 * return: binary number
 */


void print_binary(unsigned long int n)
{

int num_bits = sizeof(unsigned long int) * 8;

for (int i = num_bits - 1; i >= 0; i--)
{

unsigned long int mask = 1UL << i;
putchar((n & mask) ? '1' : '0');

}
}

int main(void)
{
unsigned long int n = 42;
print_binary(n);
putchar('\n');
return (0);

}

