#include "main.h"
#include <stdio.h>
/**
 *  printd - This function is called when you need to print an int
 *  and converts ir from char argumento to an int value.
 *  @a: the argument you wanna convert and print as an int
 *  Return: The amount of characters that the number has.
 */
int printd(va_list a)
{
	int num = va_arg(a, int);
	int numaux, contador = 0, negativo = 0, i = 0, cont = 0;
	int numaux2 = 1;

	if (num < 0)
	{
		negativo = 1;
		num = -num;
	}
	numaux = num;
	while (numaux > 0)
	{
		contador++;
		numaux = numaux / 10;
	}
	for (i = 1; i < contador; i++)
	{
		numaux2 *= 10;
	}
	for (i = 0; i < contador; i++)
	{
		if (negativo == 1)
		{
			_putchar('-');
			negativo = 0;
			cont++;
		}
		_putchar((num / numaux2) % 10 + '0');
		numaux2 /= 10;
	}
	contador += cont;
	return (contador);
}
/**
 * prints - This function is called whern  you need to print a string
 * @a: The string you wanna print
 * Return: The lenght of the string, so the amount of character you'v printed
 */
int prints(va_list a)
{
	int i = 0;
	char *arg;

	arg = va_arg(a, char*);
	if (arg == NULL)
	{
		write(1, "(null)", 6);
			return (6);
	}
	if (arg == "%\0")
	{
		_putchar('\0');
		return (1);
	}
	while (arg[i] != '\0')
	{
		_putchar(arg[i]);
		i++;
	}
	return (i);
}
