#include "main.h"
/**
 * printliteral - This function prints the parts of the format that
 * dont need to be replaced for an argument, si it litterally prints
 * the format that isn declearing another date.
 * @a: the argument that have not to be printed.
 * Return: 1, the length of a character.
 */
int printliteral(va_list a)
{
	(void)a;
	_putchar('\0');
	return (0);
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
	return (0);
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
