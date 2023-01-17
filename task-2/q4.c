
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
 printf("enter the value into that poition");
   scanf("%d",&value);

 //  max=arr[0];
  //  printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
    if(value ==arr[i])
    printf("Enter  index is %d : ",i+1);
pos=i;
    }

  /*  printf("Enter the element position to delete : ");
    scanf("%d", &pos);*/



    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {

        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }


        size--;


        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}























//Enter maximum value %d : ",max);








}