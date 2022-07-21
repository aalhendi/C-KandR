/*
 * Program to count word lengths in input and print historgram
 * Exercise 1-13
 */

#include <stdio.h>
#define IN 1
#define OUT 0
#define SIZE 10

main ()
{
  //int state = OUT;
  int c, count = 0;

  // NOTE: This may cause issues because words can be longer than SIZE. C99 has VLAs
  // Initalizing array with length SIZE.
  // Array values are whatever was on that mem addr before.
  int nlengths[SIZE];

  //Assigning array values to be 0
  for (int i=0; i<SIZE; ++i)
  {
    nlengths[i] = 0;
  }

  //Loop to take in user input
  while ((c = getchar()) != EOF)
  {

    // If char is a valid char in words, increase count
    if ((c >= 'a' && c <= 'z') | (c >= 'A' && c <= 'Z')){
      ++count;
    } else{
      // Some other char.. we wont count it as part of word.
      ++nlengths[count];
      count = 0;
    }

    // First attempt
    /*
    if (c == '\t' | c =='\n' | c == ' '){
      // If we are in a word and EOW, then we are no longer in a word.
      // Increase frequency of counted word len in array and reset count.
      if (state == IN){
	state = OUT;
	++nlengths[count];
	count = 0;
      }
    }

    // If the char is not an EOW.
    else{
      if (state == OUT){
	// If we are not in a word, we now are in one. Increase count by one.
	state = IN;
	++count;
      } else{
	// We are in a word and this is a continuation, increase count
	++count;
      }
    }
    */
  }

  // Printing output as histogram
  // Horizontal
  for (int i=0; i<SIZE; ++i){
    printf("Length[%d]: ", i);
    for (int k=0; k<nlengths[i]; ++k){
      printf("*");
    }
    printf(" %d\n", nlengths[i]);
  }

  //Vertical
  //Find max length for number of lines needed
  int max = 0;
  for (int i=0; i<SIZE; ++i){
    if (nlengths[i] > max){
      max = nlengths[i];
    }
  }

  //Loop over number of lines starting top to bottom
  for (int i=max; i>=0; --i){
    //Loop over number of bins (SIZE)
    for (int k=0; k<SIZE; ++k){
      // Only print '* ' if value >= current row, else print '  '
      if (nlengths[k] > i){
	printf("* ");
      } else {
	printf("  ");
      }
    }
    printf("\n");
  }

  // Print gridline for axis
  for (int i=0; i<SIZE; ++i){
    printf("- ");
  }
  printf("\n");

  // Print the x axis
  for (int i=0; i<SIZE; ++i){
    printf("%d ", i);
  }
  printf("\n");

}
