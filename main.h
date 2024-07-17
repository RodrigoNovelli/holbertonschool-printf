#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct datatype
{
    char letra;
    int (*funcion)(va_list arg);
} datatype;

int _putchar(char c);
int _printf(const char *format, ...);
int (*hub(char letra))(va_list);
int printnulo(va_list a);
int printc(va_list a);
int printd(va_list a);
int prints(va_list a);

#endif /* DOG_H */
