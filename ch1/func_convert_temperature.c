#include <stdio.h>

#define LOWER 0 /* lower limit of temperature scale */
#define UPPER 300 /* upper limit */
#define STEP  20 /* step size */

/* Function prototype. This is used to identify the function return
 * type and parameters. It is needed here to pass that information to
 * the compiler to cross-check function signatures before they are called */
float convert_temp(char input_unit, float value);

/* main() is also a function. It returns 0 for normal termination and
 * non-zero for unusual or incorrect termination. */
int main()
{
 float fahr, celcius;

 printf("This is a Fahrenheit to Celcius conversion table.\n"); //Exercise 1-3
 for (fahr = LOWER; fahr<= UPPER; fahr += STEP){
   printf("%3.0f\t%6.1f\n", fahr, convert_temp('F', fahr));
 }

 printf("This is a Celcius to Fahrenheit conversion table.\n"); //Exercise 1-4
 for (celcius = LOWER; celcius <= UPPER; celcius += STEP){
   printf("%3.0f\t%6.1f\n", celcius, convert_temp('C', celcius));
 }

  return 0;
}

// Exercise 1-15
float convert_temp(char input_unit, float value){
  float out;
  if (input_unit == 'C' || input_unit == 'c')
  {
    out = (value * 9.0 / 5.0) - 32.0;
  } else {
    out = (value - 32.0) * 5.0 / 9.0;
  }

  return out;
}
