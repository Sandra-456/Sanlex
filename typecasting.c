#include <stdio.h>
#include <stdlib.h>




int main()
{   /* int sum = 17, count = 5;
     double mean;

     mean = (double)sum / count;
     printf("Value of mean :%f\n",mean);


     int i = 17;
     char c = 'c';
     float sum;

     sum = i + c;
     printf("value of sum : %f\n",sum);
     */

      int dividend = 20;
      int quotient ;
      int divisor = 10 ;

      if ( divisor == 0){
        fprintf(stderr, "Division by zero! Exiting...\n");
        exit(-1);
      }

      quotient = dividend / divisor ;
      fprintf(stderr, "Value of quotient : %d\n",quotient);

      exit(0);



}
