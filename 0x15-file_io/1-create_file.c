#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - name of file to be created
 * return: return 1 on success and -1 on failure
 * return: return -1 if filename is NULL
 *
 * @text_content: is a NULL terminated string to write to the file
 */


int create_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
return (-1);
}
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
int len = strlen(text_content);
ssize_t bytes_written = write(fd, text_content, len);
if (bytes_written != len)
{
close(fd);
return (-1);
}
}
close(fd);

return (1);
}

