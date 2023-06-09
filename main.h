#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
* struct op - flag / function object
* @c: flag
* @f: function
*/

typedef struct op
{
	char *c;
	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list ar_list);
int print_s(va_list ar_list);
int (*get_func(char s))(va_list ar_list);
int print_d(va_list ar_list);
int print_i(va_list ar_numlist);
#endif
