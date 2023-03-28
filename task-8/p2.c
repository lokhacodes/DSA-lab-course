#include<stdio.h>

int fibonacciSeries(int Number)
{
   if ( Number == 0 )
      return 0;
   else if ( Number == 1 )
      return 1;
      return ( fibonacciSeries(Number - 1) + fibonacciSeries(Number - 2) );
}

int main()
{
   int Number, j, sum = 0;

   printf("\nEnter Maximum Number = ");
   scanf("%d", &Number);

   printf("Fibonacci Series Numbers up to %d:\n", Number);

   for ( j = 0 ; j < Number; j++ )
   {
      printf("%d   ", fibonacciSeries(j));
      sum = sum + fibonacciSeries(j);
   }
     printf("\nThe Sum = %d\n", sum);
}