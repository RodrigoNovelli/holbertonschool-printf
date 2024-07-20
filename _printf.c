#include "main.h"
/**
 * _printf - This function prints the format and if the format
 * point to an argument invoques hub function to determinate
 * wich sub-function does the datatype needs.
 * @format: this argument declares the data type that the va list need
 * to find in the nect arguments.
 * Return: The amount of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	int cantidad = 0;
	int (*func)(va_list);

	va_start(arg, format);
	if (format[0] == '%' && format[1] == '\0')
	{
		return (-1);
	}
	while (format[i] != '\0')/* Este while recorre format hasta su fin*/
	{
		if (format[i] == '%') /* Si encuentra un % entra aca*/
		{
			i++;
			func = hub(format[i]);
			if (func != NULL)
				cantidad += func(arg);
			else
				cantidad += 2;/* Manda el siguiente caracter a la funcion hub */
		}
		else
		{  /* Si no es un % simplemente imprime el caracter */
			cantidad++;/* y suma uno a la cantidad */
			_putchar(format[i]);
		}
		i++;
	}
	va_end(arg);
	return (cantidad);
}
