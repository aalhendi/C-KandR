//Exercise 1-9
#include <stdio.h>

#define TRUE 1
#define FALSE 0

main()
{
  int c, prev_blank;
  prev_blank = FALSE; // 0 if not blank, 1 if blank

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' && prev_blank == TRUE)
    {
      // do nothing
    }
    else if (c == ' ' & prev_blank == FALSE)
    {
      prev_blank = TRUE;
      putchar(c);
    }
    else
    {
      putchar(c);
      prev_blank = FALSE;
    }
  }
}
