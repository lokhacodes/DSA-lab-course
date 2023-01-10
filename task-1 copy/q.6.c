#include<stdio.h>
int main()
{

int n,i;
printf ("Enter the value of n");
scanf("%d",&n);
int A[n];
printf("Enter %d values",n  );

int B[n];

  // taking input and storing it in an array
  for(int i = 0; i < n; ++i) {
     scanf("%d", &A[i]);
  }

  printf("Array is : \n");

  // printing elements of an array
  for(int i = 0; i < n; ++i) {
     printf("A[%d]=%d\n",i, A[i]);


  }

  for(int i = 0; i < n; ++i) {
   B[i]= A[i];
     printf("B[%d]=%d\n",i, B[i]);}


  }