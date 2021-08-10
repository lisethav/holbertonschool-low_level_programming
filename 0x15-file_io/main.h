#ifndef _FILE_IO_
#define _FILE_IO_

/*----Libraries----*/
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/*----Prototypes----*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);



#endif /*_FILE_IO_ */
