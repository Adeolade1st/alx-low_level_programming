#include <stdio.h>

/**
 * main - Program that prints all arguments
 * @argc: argument counter
 * @argv: array that stores string
 * return: 0
 */

int main(int argc, char *argv[])

{

int i;

for (i = 0; i < argc; i++)

{
printf("%s\n", argv[i]);
}
return (0);


}
