#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies 2 numbers
 * @argc: first number
 * @argv: second number
 * return: 1
 */

int main(int argc, char *argv[])

{


int x, y;


if (argc < 1)

{

printf("Error\n");

return (1);

}


x = atoi(argv[1]);
y = atoi(argv[2]);

printf("%d\n", x * y);



return (0);


}
