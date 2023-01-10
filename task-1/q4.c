#include<stdio.h>
int main()
{
int i, n;
float sum=0;
printf ("Enter the value of n");
scanf("%d",&n);
float values[n];
printf("Enter %d values",n  );



  // taking input and storing it in an array
  for(int i = 0; i < n; i++) {
     scanf("%f", &values[i]);
  }

  printf("Array is : \n");

  // printing elements of an array
  for(int i = 0; i < n; i++) {
     printf("values[%d]=%0.1f\n",i, values[i]);
  }

 // printf("sum of %d values is : \n",n);

  // printing elements of an array
  for(int i = 0; i < n; i++) {
     //printf("values[%d]=%d\n",i, values[i]);
     sum = sum + values[i];
      //printf("sum of %d values is :%d \n",n,sum);
  }
printf("sum of %d values is :%0.1f \n",n,sum);
  }