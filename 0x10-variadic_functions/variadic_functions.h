#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct print_formats
{
	char *format;
	void (*print_func)(va_list);
} print_formats_t;

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

