#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void simple_print_buffer(char *buffer, unsigned int size);
int main(int argc, char *argv[]);
int is_positive_digit(char *str);
void multiply_and_print_result(char *num1, char *num2);
void print_error_and_exit(void);

#endif /* MAIN_H */
