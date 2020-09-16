#include "factorial.h"

int factorial(int number)
{
  /* Return -1 for negative numbers */
  if(number < 0)
    return -1;

  /* Return 1 for 0 */
  if(number == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return number * factorial(number-1);
}

// function to check whether number is prime or not.
//Prajwal Rao p 104445
int Prime(int number){
    int inc;
    int flag=0;
    if (number<=1){
    return 0;}
    for (inc = 2; inc <= number / 2; ++inc) {//need to check for half of range only

        // condition for non-prime
        if (number % inc == 0) {
            flag = 1;
            return -1;
        }
    }





        if (flag == 0)
            return 1;//number is composite
        else
            return 0;



}
