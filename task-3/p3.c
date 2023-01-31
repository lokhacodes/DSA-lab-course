#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {

  while (low <= high) {
    int mid = (low + high) / 2;

    if (array[mid] == x)

    {
      //  printf("%d", mid);
        return mid;

    }

    else if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

}

int main(void) {

    int i, m, result=-1;

printf("Enter No. of book ids:");
scanf("%d",&m);
int array[m];
printf("Enter Book Ids");
 for(i=0;i<m;i++){

 scanf("%d",&array[i]);
 }
  int x ;

printf("Find the index of Book id:");
scanf("%d",&x);

  result = binarySearch(array, x, 0, m - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}