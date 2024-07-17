int printliteral(char letra){
    _putchar('%');
    _putchar(letra);
    return (2);
}
int printnulo(va_list a){
    void(a);
    _putchar('%');
    return(1);
}
int printc(va_list a){
    char c;

    c = va_arg(a, int);
    _putchar(c);
    return(1);
}
