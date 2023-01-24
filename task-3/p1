#include<stdio.h>
int main()
{
int m,i,j ,result=-1;

int x ;

printf("Find out bench no. of id:");
scanf("%d",&x);
printf("Number of Students");
scanf("%d",&m);
int A[m];
printf("Before seat arrangement:");
 for(i=0;i<m;i++){

 scanf("%d",&A[i]);
 }

float swap;
for (i=0 ;i<m-1;i++){
for(j =0;j<m-1-i;j++){
    if(A[j]>A[j+1]){
    swap = A[j];
    A[j]=A[j+1];
    A[j+1]=swap;

    }
    }
}


printf(" After seat arrangement:");
 for(i=0;i<m;i++){

 printf("%d\n",A[i]);
 }


 int binarySearch(int A[], int x, int low, int high) {


  while (low <= high) {
    int mid = (low + high) / 2;

    if (A[mid] == x)

    {
      //  printf("%d", mid);
        return mid;

    }

    else if (A[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

}
result = binarySearch(A, x, 0, m - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);






}