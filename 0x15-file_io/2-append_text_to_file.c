#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - adds a string
 * @filename:the filename
 * @text_content:text to appended
 * Return:int
 */
int append_text_to_file(const char *filename, char *text_content)
{
int op, wr, le;
if (filename == NULL)
{
	return (-1);
}

if (text_content != NULL)
{
le = 0;
while (text_content[le])
{
le++;
}
}
op = open(filename, O_WRONLY | O_APPEND);
wr = write(op, text_content, le);

if (op == -1 || wr == -1)
{
	return (-1);
}
close(op);
return (1);
}
