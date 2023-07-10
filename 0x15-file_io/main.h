#ifndef main_h
#define main_h

#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *buffer_size(char *file);
void close_file(int fd);





#endif
