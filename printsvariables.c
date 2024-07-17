#include "main.h"

int printd(va_list a)
{
	int num = va_arg(a, int);
	int numaux = num;
	int contador = 0, i, j = 0, numaux2 = 1;
	
	while (numaux == 0)
	{
		contador++;
		numaux / 10;
	}
	for (i = 0; i < contador; i++)
	{
		for (j = contador - 1; j > i; j--)
		{
			numaux2 = numaux2 * 10;
		}
		_putchar((num / numaux2) % 10 + '0');
		numaux = 1;
	}
	return (contador);
}
int prints(va_list a)
{
	int i;
	char *arg = va_arg(a, char*);
	while (arg[i] != '\0')
	{
		_putchar(arg[i]);
		i++;
	}
	return (i);
}
