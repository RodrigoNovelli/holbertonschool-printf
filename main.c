int _printf(const char *format, ...)
{
va_list arg;
int i = 0;
int cantidad = 0;

va_start(arg, format);
while(format[i] != '\0')
{
    if(format[i] == '%')
    {
        i++;
        hub(format[i]);
    }
    else
    {  
        cantidad++;
        _putchar(format[i]);

    } 
    i++;
}
return (cantidad);
}