# _PRINTF FUNCTION #
This is  function that prints everyting in its format argument (_printf(format, ...)), but when it finds a "%" it will look if you are declaring a datatype, if the next character its a declaration od datatype (s, c, d or i) it will find the first argument that matches this type and print it replacing the "%d" with the argument. if you wanna print "%" or literally "%d" you must use backslash to declare that you wanna use this part of the format in a literally way.
| FORMAT DECLARATION | DATATYPE |
| %d | int |
| %i | int |
| %s | char *|
| %c | char |
| %% | literally % |

## _PRINTF.C FILE ##
The code hosted in this file only do two things, reads the format and decides, if it finds a "%" it will invoque hub function (hosted in "hub.c" file) and if itsn´t it will just print the character. By the way every char that is printed will increment the counter variable,l that is the return of the function, thats why in it´s declaration _printf retuns an int value, it´s correspondes to the amount of characters printed.

## HUB.C ##
As we said while describing the "_printf.c" file, "hub.c" is called when a "%" is found in the format.
Basically hub.c is a function that is call to call another function, its sees what character is next to "%" and decides wich function will help printing that type of data.

