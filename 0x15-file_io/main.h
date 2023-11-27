#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
size_t get_strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
int cp_file_from_file_to(char *file_from, char *file_to);
void check_fails(int file_state, int fd, char *file_name, char action_tried);

#endif /* MAIN_H */
