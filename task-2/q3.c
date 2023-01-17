#include<stdio.h>
int main(){


   {
    int arr[50];
    int i, size, pos,value;

    /* Input size and element in array */
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
 printf("enter the value into that poition:");
   scanf("%d",&value);

 //  max=arr[0];
  //  printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
    if(value ==arr[i])
    printf("Enter  index is %d  ",i+1);
}
   }}