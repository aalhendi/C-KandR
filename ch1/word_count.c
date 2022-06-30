#include <stdio.h>

#define IN 1  // Inside  a word
#define OUT 0 // Outside a word

main ()
{
  int c, nl, nw, nc, state;
  
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF)
  {
    ++nc;
    //NOTE: We will be executing both if statements if c == '\n'
    if (c == '\n')
      ++nl;
    /* || means OR. is c equal to a blank ' ' OR is it equal to a tab '\t'
     * && means AND. A collection of these statements is evaluated from
     * left to right and stops when truth or falsehood is known. && has 
     * higher precedence compared to ||. For example, if c is a blank ' '
     * we dont need to check if its a newline '\n or a tab '\t'. This saves
     * unnecessary computation and saves time.*/
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }
    else if (state == OUT)
    {
      ++nw;
      state = IN;
    }
  }
  /* Exercise 1-11:
   * We would test the program by feeding it a paragraph with known number of
   * words and check if the program calculated number is equal. Then we would
   * test some of the boundary conditions to check for bugs. This would include
   * random characters like ;' and see if it counts them as a word. Other
   * grammar tests like the count for 'un-cool' or 'why ?' might be useful*/
  printf("%d %d %d\n", nl, nw, nc);

}
