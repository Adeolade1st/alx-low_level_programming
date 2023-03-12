#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * argc: argument counter
 * argv: array that stores string
 * return: 0
 */

int main(int argc, char *argv[])

{

(void)argc;
(void)argv;


int i;

for (i = 0; i < argc; i++)

{
printf("%s\n", argv[i]);
}
return (0);


}
