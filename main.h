#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _print(const char *format, va_list args);
int _putchar(char c);

#endif