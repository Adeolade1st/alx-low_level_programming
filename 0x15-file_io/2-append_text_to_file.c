#include <stdio.h>
#include "main.h"


/**
 * append_text_to_file - function to append text to the end of a file
 * @filename: file name
 * @text_content: text content
 * return: 1 if file exist, -1 if it doesn't
 */

int append_text_to_file(const char* filename, char* text_content)
{
if (filename == NULL)
{
return (-1);
}

FILE* file = fopen(filename, "a");

if (file == NULL)
{
return (-1);
}

if (text_content != NULL)
{
fprintf(file, "%s", text_content);
}

fclose(file);
return (1);
}

