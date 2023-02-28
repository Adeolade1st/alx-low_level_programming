#include "main.h"
/**
 * swap_int - function that swaps the value of 2 integers
 * @a: first number
 * @b: second number
 * return: a and b
 */

void swap_int(int *a, int *b)

{
int temp;
temp = *a;
*a = *b;
*b = temp;

}
