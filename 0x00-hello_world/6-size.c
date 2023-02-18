#include <stdio.h>
/**
 * main - Program to print diff sizes
 *
 * Description: Print different sizes in bytes
 *
 * return: 0 (success)
 */
int main(void)
{ 
	char a;
	int b;
	long c;
	long long d;
	float e;	

	printf("size of char: %1d bytes\n", sizeof(a));
	printf("size of int: %1d bytes\n", sizeof(b));
	printf("size of long: %1d bytes\n", sizeof(c));
	peintf("size of long long: %1d bytes\n", sizeof(d));
	printf("size of float: %1d bytes\n", sizeof(e));
	return (0);
}



