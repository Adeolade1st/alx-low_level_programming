#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * @filename - function that prints a text file and pribt to posix
 * @size_t letters: number of size to be returned
 * return: return NULL if file is 0
 * return: return 0 if file fails
 */


ssize_t read_textfile(const char *filename, size_t letters)

{

if (filename == NULL)
{

return (0);
}


int fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}

char * buf = (char*) malloc(letters * sizeof(char));
if (buf == NULL)
{
pclose(fd);
return (0);
}

size_t bytes_read = fread(fd, buf, letters);
if (bytes_read == -1)
{
free(buf);
pclose(fd);
return (0);
}

size_t bytes_written = fwrite(STDOUT_FILENO, buf, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buf);
pclose(fd);
return (0);
}

free(buf);
close(fd);
return (bytes_written);
}


