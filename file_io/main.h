#ifndef _MAIN_H_
#define _MAIN_H_

/*Libraries*/
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>

/*Prototypes*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
int function_fchmod(int fd_second, mode_t mode);
int function_close(int fd);
int function_open(char *argv, int flags);

#endif /*_MAIN_H_*/

