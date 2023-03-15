#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array ofsize size and assign char
 * @size: size of array
 * @c: char to assign
 * Description: Create an array of size size
 * return: pointer to array, NULL if faill
 */

char *create_array(unsigned int size, char c)

{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;
return (str);


}
