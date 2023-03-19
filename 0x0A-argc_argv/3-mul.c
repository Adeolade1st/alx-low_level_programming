#include <stdio.h>
#include <stdlib.h>

/*
 * main - program to multiply two numbers x and y
 * @argc: argumnet counter
 * @argv: array to store string
 * return: 0
 */

int main(int argc, char *argv[])

{


int x, y;


x = atoi(argv[1]);
y = atoi(argv[2]);

printf("%d\n", x * y);

if (argc < 0)

{
printf("Error %d\n", argc);
return (0);
}
return (0);
}

