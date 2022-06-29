#include <stdio.h>

/* Its bad practice to bury magic constants in a program
 * #define lets us give these constants a meaningful name
 * these symbolic constant names will be replaced with their values
 * at compilation and dont use extra memory. They are conventionally
 * written in UPPERCASE and dont have a semicolon ; at the end*/
#define LOWER 0 /* lower limit of temperature scale */
#define UPPER 300 /* upper limit */
#define STEP  20 /* step size */

/* print Fahrenheit-Celcius table
 * for fahr = 0, 20, ..., 300 */
main()
{
  /* All variables must be declared before they are used.
   * This is usually done at the beginning of functions before
   * any executable statements. A declaration states the properties
   * of variables. The example below uses float to state that the variables
   * are floating-point numbers with fahr and celcius as variable names. */
 float fahr, celcius;

 printf("This is a Fahrenheit to Celcius conversion table.\n"); //Exercise 1-3
 /* This is the intialization step. Declared variables have undefined, 
  * random values often corresponding to data that was previously in
  * that  memory location. Variables are assigned their inital value below.*/
 fahr = LOWER;
 /* The while loop tests the condition within parentheses and
  * executes the loop body if the condition evaluates to true.
  * The condition is retested after the loop body executes in
  * a loop-like fashion until the condition evaluates to false
  * in which case the program moves to the next statement after the loop.*/
 while (fahr <= UPPER)
 {
   /* 32.0 is explicity used with a decimal to emphasize the floating-point
    * nature of the calculation. This is to enhance readability.*/
   celcius = (fahr-32.0) * 5.0 / 9.0;
   /* Here we provide printf with %d which specifies that we want
    * to substitute an argument into the output. The f specifies that the
    * argument is an float. Substiutions % line up with arguments and
    * maintaining the correct order or arguments is important. The numbers
    * before the f in %3.0f is the minimum width of the field the argument will be 
    * substituted in as well as the number of digits after the decimal point*/
   printf("%3.0f\t%6.1f\n", fahr, celcius);
   fahr = fahr + STEP;
 }

 printf("This is a Celcius to Fahrenheit conversion table.\n"); //Exercise 1-4
 /* The for loop is a generalization of the while loop. It also evaluates the
  * statements between parentheses before executing the loop body.
  * There are 3 statements. The initalization, the test conditon and the
  * increment step. It is worth noting that the third statement executes AFTER
  * the loop body is executed.*/
 for (celcius = 0; celcius <= UPPER; celcius = celcius + STEP)
 {
   printf("%3.0f\t%6.1f\n", celcius, (celcius * 9.0 / 5.0) - 32.0);
 }

 //Exercise 1-5
 printf("This is a Reversed Celcius to Fahrenheit conversion table.\n"); //Exercise 1-4
 for (celcius = 300; celcius >= LOWER; celcius = celcius - STEP)
 {
   printf("%3.0f\t%6.1f\n", celcius, (celcius * 9.0 / 5.0) - 32.0);
 }



}
