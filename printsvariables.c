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
	int numaux, contador = 0, negativo = 0, i = 0;
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
		}
		_putchar((num / numaux2) % 10 + '0');
		numaux2 /= 10;
	}
	return (contador);
}
