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
	long int num = va_arg(a, int);
	long int numaux, contador = 0, negativo = 0, i = 0;
	int numaux2 = 1;
	if (num == -1)
	{
	_putchar('-');
	_putchar('1');
	return (2);
	}
	if (num < 0)
	{
		negativo = 1;
		num = -num;
		num = num - 1;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
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
			negativo = 2;
			
		}
		if (negativo == 2 && (i + 1) == contador)
		_putchar(((num + 1) / numaux2) % 10 + '0');
		else
		_putchar((num / numaux2) % 10 + '0');
		numaux2 /= 10;
	}
	if (negativo == 2)
	return (contador + 1);
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
	while (arg[i] != '\0')
	{
		_putchar(arg[i]);
		i++;
	}
	return (i);
}
