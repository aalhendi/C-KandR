#include <stdio.h>

#define IN 1  // Inside  a word
#define OUT 0 // Outside a word

// Solves Exercise 1-12. Write a program prints its input one word per line
main ()
{
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      if (state == IN)
        putchar('\n');
      state = OUT;
    }
    else
    {
      state = IN;
      putchar(c);
    }
  }
}
