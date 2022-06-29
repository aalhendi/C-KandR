/* Tells the compiler to include information
 * about the standard input output library */
#include <stdio.h>

/* The program begins executing at 'main'.
 * main is a special function and every C
 * program has a main. It takes arguments between
 * patrentheses (). This program has no arguments.*/
main()
{
    /* Function bodies are defined by braces {}.
     * Here we call the printf function from the
     * stdio library which takes our text input
     * between parentheses () and outputs it to the
     * console. Our text is wrapped in quotes "" to
     * mark it as a character string or a string constant.
     * \n is is an escape sequence that denotes a new line.*/
    printf("hello, world.\n");
    /* \y is an unknown escape sequence. It is included here
     * as part of an excercise to experiment with escape sequences*/
    printf("\y.\n");
}
