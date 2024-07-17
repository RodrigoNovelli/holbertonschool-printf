#include "main.h"

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	int cantidad = 0;

	
	va_start(arg, format);
	while(format[i] != '\0') /* Este while recorre format hasta su fin*/
	{
		if(format[i] == '%') /* Si encuentra un % entra aca*/
		{
			i++;
			cantidad = cantidad + hub(format[i]); 
			/* Manda el siguiente caracter a la funcion hub */
		}
		else
		{  
			/* Si no es un % simplemente imprime el caracter */
			cantidad++; /* y suma uno a la cantidad */
			_putchar(format[i]);
		} 
		i++;
	}
	return (cantidad);
}
