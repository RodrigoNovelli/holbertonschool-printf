#include "main.h"
/**
 * hub - This function decides wich function is necessary to invoque
 * deppending on the format declared.
 * @letra: The character that follows % who annunces a datatype
 * Return: Returns the function that must be applied.
 */
int (*hub(char letra))(va_list arg)
{
	int i = 0;

	datatype ls[] = {
		{'s', prints},
		{'c', printc},
		{'d', printd},
		{'i', printd},
		{'%', printnulo},
		{'\0', printnulo},
	};
	while (i < 5)
	{
		if (ls[i].letra == letra)
			return (ls[i].funcion);
		i++;
	}
	_putchar('%');
	_putchar(letra);
	return (NULL);
}
