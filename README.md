# _PRINTF FUNCTION #
This is a function that prints everyting in its format argument (_printf(format, ...)), but when it finds a "%" it will look if you are declaring a datatype, if the next character its a declaration od datatype (s, c, d or i) it will find the first argument that matches this type and print it replacing the "%d" with the argument. if you wanna print "%" or literally "%d" you must use backslash to declare that you wanna use this part of the format in a literally way.
| ** FORMAT DECLARATION ** | ** DATATYPE ** |
| :--: | :--: |
| %d | int |
| :--: | :--: |
| %i | int |
| :--: | :--: |
| %s | char *|
| :--: | :--: |
| %c | char |
| :--: | :--: |
| %% | literally % |

## _PRINTF.C FILE ##
The code hosted in this file only do two things, reads the format and decides, if it finds a "%" it will invoque hub function (hosted in "hub.c" file) and if itsn´t it will just print the character. By the way every char that is printed will increment the counter variable,l that is the return of the function, thats why in it´s declaration _printf retuns an int value, it´s correspondes to the amount of characters printed.

## HUB.C ##
As we said while describing the "_printf.c" file, "hub.c" is called when a "%" is found in the format.
Basically hub.c is a function that is call to call another function, its sees what character is next to "%" and decides wich function will help printing that type of data. 
/ the structure that hub function uses is declared in the "main.h" file with all the function declarations. /

![charflow print.c](https://drive.google.com/file/d/1VHFtVRtmpeb0jJ2JJk0psx__HQCQc_2X/view?usp=drive_link)

| ** Data type declared ** | ** Function called for hub ** |
| :--: | :--: |
| Char | printc |
| :--: | :--: |
| Char * | prints |
| :--: | :--: |
| Int | printd |
| :--: | :--: |
| % | printnulo |
| :--: | :--: |
| \0 | printliteral | 

## PRINTSFIJOS.C ##
The return of every function that hub.c calls has the amount of printed characters, in this file we put all the functions that return constant values, thats why here we have printc (the function that prints characters) everytime that printc is called it will print one character so the return is not variable, its always 1. The same thing happens with "printnulo" function and "printliteral" the returns are different because printliteral is used when yhe format is a single "%" and this function prints nothing with that argument so instead of 1, it will return 0.

![charflow printsfijos.c](https://drive.google.com/file/d/1bpyhlz0Q1wLc033tNHuvb7fi8-vGoKLR/view?usp=drive_link)

## PRINTSVARIABLES.C ##
As we said in the description of "printsfijos.c" every function here returns the amount of characters that is printed, in the functions hosted by "printsvariables.c" each case have a different return, thats why here we have "prints" (for string printing) and "printsd" (for int printing)
#### prints ####
The "prints" function will go trough the array of the string and print every character incrementing the counter until null character is reached, the return will be the counter, if we are in front of a null string it will just print "(null)" and return 6, because there are six characters printed.
![charflow prints.c](https://drive.google.com/file/d/1LlKIgGTlLFe3WRefOjPLRlsGnnTsfZmZ/view?usp=drive_link)
#### printd ####
For int values we need to convert the ints values to char values so we can print them, so we created or own itoa function, so tis function will first count the amount of characters that is needed and then convert each digit into a character. The return will be te total amount of digit (including "-" in negatives) and 0, INTMAX and INTMIN are contemplated in this function.
![charflow prints.c](https://drive.google.com/file/d/15bu2vs8-s3llqMi1j8htTl9gGHPiqfVH/view?usp=drive_link)
