#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * buffer_size - allocates bytes to buffer.
 * @file:where the chars are stored.
 * Return:pointer to buff.
 */

char *buffer_size(char *file);
void close_file(int fd);

char *buffer_size(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

	return (buffer);
}
/**
 * close_file - shuts file descriptor
 * @fd: the descriptor
 * Return:void
 */

void close_file(int fd)
{

int i;

i = close(fd);

if (i == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

}
/**
 * main - copies file contents
 * @argc: no of arguments
 * @argv:pointers to arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
char *buffer;
int re, wr, from, to;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
buffer = buffer_size(argv[2]);
from  = open(argv[1], O_RDONLY);
re = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {


if (re == -1 || from == -1)
{
	dprintf(STDERR_FILENO,
		"Error: Can't read from file NAME_OF_THE_FILE%s\n", argv[1]);
	free(buffer);
	exit(98);
}
wr = write(to, buffer, re);
if (to == -1 || wr== -1)
{

	dprintf(STDERR_FILENO, "Error: Can't write to\n,argv[2]");
	free(buffer);
	exit(99);

}
to = open(argv[2], O_WRONLY | O_APPEND);
re = read(from, buffer, 1024);

}
while (re > 0);
	free(buffer);
	close_file(from);
	close_file(to);

return (0);
}
