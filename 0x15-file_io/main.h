#ifndef MAIN
#define MAIN

/*
 * File: main.h
 * Auth: Ayub Mbugua
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x15-file_io directory
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
