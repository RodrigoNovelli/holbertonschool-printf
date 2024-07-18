#include "main.h"
/**
 * printliteral - This function prints the parts of the format that
 * dont need to be replaced for an argument, si it litterally prints
 * the format that isn declearing another date.
 * @letra: the character that you wanna print
 * Return: 1, the length of a character.
 */
int printliteral(char letra)
{
	_putchar('%');
	_putchar(letra);
	return (2);
}
/**
 * printnulo - this function is called when the you wanna print '%' as it is.
 * @a: the argument to be printed
 * Return: 1, it only prints one chaaracter.
 */
int printnulo(va_list a)
{
	(void)a;
	_putchar('%');
	return (1);
}
/**
 * printc - This function is called when you need to print an argument a that
 * is a char.
 * @a: The char you wanna print.
 * Return: 1, the lenght of what you are printing.
 */
int printc(va_list a)
{
	char c;

	c = va_arg(a, int);
	_putchar(c);
	return (1);
}
/**
 * prints - This function is called whern  you need to print a string
 * @a: The string you wanna print
 * Return: The lenght of the string, so the amount of character you'v printed
 */
int prints(va_list a)
{
	int i = 0;
	char *arg = va_arg(a, char*);

	while (arg[i] != '\0')
	{
		_putchar(arg[i]);
		i++;
	}
	return (i);
}
