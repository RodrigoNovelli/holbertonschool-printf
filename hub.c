int (*hub(char letra))(va_list){

    datatype ls[] = {
    {'s', prints},
    {'c', printc},
    {'d', printd},
    {'i', printd},
    {'\0', printnulo},
    }
    int i = 0;

    while (i < 5)
    {
        if (ls[i].letra == letra)
            return (ls[i].funcion);
        i++;
    } 
    return (printliteral(letra));
    

}