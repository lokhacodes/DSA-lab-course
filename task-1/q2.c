#include<stdio.h>
int main()
{

int n,i;
printf ("Enter the value of n");
scanf("%d",&n);
int values[n];
printf("Enter %d values",n  );



  // taking input and storing it in an array
  for(int i = 0; i < n; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Array is : \n");

  // printing elements of an array
  for(int i = 0; i < n; ++i) {
  if(values[i]%2!=0){
     printf("values[%d]=%d\n",i, values[i]);}
  }}