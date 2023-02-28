#include"main.h"

/**
* strlen - program that returns the length of a string
* @s: string
* return: long
*/

int _strlen(char *s)

{
int longi = 0;

while (*s != '\0')
{
longi++;
s++;
}

return (longi);

}
