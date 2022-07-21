/*
 * Exercise 1-14
 * Write a program to frequencies of different characters in its input.
 */
#include <stdio.h>
#define SIZE 26

main()
{
  int c;
  int nchars[SIZE];

  for (int i=0; i<SIZE; ++i) nchars[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c >= 'a' && c <= 'z') {
      // Valid char to count
      ++nchars[c - 'a'];
    }
    else if (c >= 'A' && c <= 'Z'){
      //normalize then count
      c -= 'A'-'a';
      ++nchars[c - 'a'];
    } else{
      //dont count
    }
  }

  // Printing output as histogram
  // Horizontal
  for (int i=0; i<SIZE; ++i){
    printf("Length[%c]: ", i+'a');
    for (int k=0; k<nchars[i]; ++k){
      printf("*");
    }
    printf(" %d\n", nchars[i]);
  }

}
