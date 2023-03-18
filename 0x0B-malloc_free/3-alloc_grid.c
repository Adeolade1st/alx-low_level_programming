#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - create a matrix using malloc
 * @width: width of the matrix
 * @height: height of the matrix
 * return: return a pointer of pointer or null
 */

int **alloc_grid(int width, int height)
{

/**(void)i;*/

int j, a, b;
int **p;

if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{

p = (int **) malloc(height * sizeof(int *));

if (!p)
{
free(p);

return (NULL);

}

for (j = 0; j < height; j++)
free(p[j]);

free(p);
return (NULL);

}


for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
{
p[a][b] = 0;
}
}

return (p);


}


