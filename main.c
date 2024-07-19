#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
   int len;
    int len2;
    unsigned int ui;
    void *addr;


    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("%d\n", -762534);
    len2 =     printf("%d\n", -762534);
    printf("len = %d\nlen2 = %d\n", len, len2);

    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%");
    _printf("%d\n", 0);

/*    len = _printf("%d\n", 5);
    len2 = printf("%d\n", 5);
    printf("len = %d\nlen2 = %d\n", len, len2);
    printf("negative case:\n");
    len = _printf("%d\n", -5);
    len2 = printf("%d\n", -5);
    printf("len = %d\nlen2 = %d\n", len, len2);*/
 
    return (0);
}
