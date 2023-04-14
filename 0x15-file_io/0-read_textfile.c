#include <stdlib.h>
#include "main.h"

/**
 * 
 * @filename:name of txt file
 * @letters:no of letters to be printed
 * Return: no of letters that were printed
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t re, wr, op;
char *buff;

if (filename == NULL)
{
	return (0);
}

buff = malloc(letters * (sizeof(char)));

if (buff == NULL)
{
        return (0);
}

op = open(filename, O_RDONLY);
re = read(op, buff, letters);
wr = write(STDOUT_FILENO, buff, re);

free(buff);
close(op);
return (wr);
}
