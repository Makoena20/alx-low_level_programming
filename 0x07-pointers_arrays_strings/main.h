#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>

char *_memset(char *s, char b, unsigned int n);
void simple_print_buffer(char *buffer, unsigned int size);
void simple_print_buffer(char *buffer, unsigned int size);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */