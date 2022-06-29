#include <stdio.h>

main()
{
  /* Even though we wish to read characters, an int type is used.
   * This is because while we can use char, we also want to be able to
   * distinguish when EOF is passed. Chars are also stored in memory in
   * a bit representation anyway. Therefore, the type int is used as
   * it can hold the EOF value as well as any char. The EOF is an int
   * that is larger than any of the char values.*/
  int c;

  //Exercise 1-6
  printf("Input a value != EOF\n");
  c = getchar();
  printf("%d is value of (c != EOF)\n", (c != EOF));

  /* Here we assign c within the loop conditional statement.
   * Note that because the loop condition will always be evaluated before
   * executing the loop body, c will be assigned before we call it making
   * this a valid program. The parentheses gives precedence to the statements
   * within it. So we assign c by calling getchar(), then check whether or
   * not it is equal to EOF. If it is not equal != then we execute the loop
   * body.*/
  printf("Main loop. EOF (ctrl+d UNIX, ctrl+z Windows) to exit\n");
  while((c = getchar()) != EOF){
    putchar(c);
    c = getchar();
  }
  //Exercise 1-7. The loop only breaks when c == EOF. So we print it.
  printf("%d is (c !== EOF) and EOF = %d\n", (c != EOF), c);

  
}
