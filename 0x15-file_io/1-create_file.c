#include "main.h"
#include <stdlib.h>
/**
 * create_file - creates a new file
 * @filename:a string containing the file name
 * @text_content:what the file should contain
 * Return:an int
 *
 */
int create_file(const char *filename, char *text_content)
{
int op, wr, length;

if (filename == NULL)
{
	return (-1);
}
if (text_content != NULL)
{
length = 0;
while (text_content[length])
{
length++;
}

}
op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(op, text_content, length);

if (op == -1 || wr == -1)
{
	return (-1);
}
close(op);
return (wr);
}
