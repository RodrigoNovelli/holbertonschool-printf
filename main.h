#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct datatype - This istructure will be used for hub to call the correct
 * function for each case
 * @letra: The data type as a char
 * @funcion: the function that needs to be called.
 *
 * Description: in this structure you will select the best function
 * for each case.
 */
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
int printliteral(char letra);
#endif /* DOG_H */
