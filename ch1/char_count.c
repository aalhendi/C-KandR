#include <stdio.h>

main()
{
  long nc;

  //nc = 0;
  //while (getchar() !=EOF)
  //  ++nc;
  //printf("%ld\n", nc);

  /* Can also be written as below.*/
  for (nc = 0; getchar()!=EOF; ++nc)
   /* for loop must have a body. The isolated semicolon serves as
    * a null statement which acts as the body. We put it on a new line to
    * indicate that there is no loop body and make it visible.*/
    ;
  printf("%ld\n",nc);
}
