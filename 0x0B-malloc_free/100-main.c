#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{

char *s;

s = args_to_str(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
} 
