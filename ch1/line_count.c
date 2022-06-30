#include <stdio.h>

main()
{
  int c, nl, tabs, blanks;
  nl = tabs = blanks = 0;
  
  while ((c = getchar()) != EOF)
    /* A character between single quotations represents a character
     * constant. This is the int representation of the character.
     * eg. '\n' == 10 in ASCII.*/
    if (c == '\n')
      ++nl;
    // Exercise 1-8
    else if (c == '\t')
      ++tabs;
    else if (c == ' ')
      ++ blanks;
    
  printf("%d new lines, %d tabs, %d blanks\n", nl, tabs, blanks);
}
