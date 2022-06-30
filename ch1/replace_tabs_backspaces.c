//Exercise 1-10
#include <stdio.h>


main()
{
  int c;
  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      putchar('\\');
      putchar('t');
    }
    else if (c == '\b')
    {
      //NOTE: \b is very terminal dependant. There are better ways of doing this.
      putchar('\\');
      putchar('b');
    }
    else if (c == '\\')
    {
      putchar('\\');
      putchar('\\');
    }
    else 
    {
      putchar(c);
    }
  }
}
