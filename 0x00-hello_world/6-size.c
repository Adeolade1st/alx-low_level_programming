#include <stdio.h>
#include <conio.h>
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
	long int c;
	long long d;
	float e;	

	printf("size of a char: %1d byte(s)\n", sizeof(a));
	printf("size of a int: %4d byte(s)\n", sizeof(b));
	printf("size of a long int: %4d byte(s)\n", sizeof(c));
	peintf("size of a long long: %8d byte(s)\n", sizeof(d));
	printf("size of a float: %4d byte(s)\n", sizeof(e));
	return (0);
}



