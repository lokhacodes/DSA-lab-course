#include<stdio.h>
int main()
{

int n,i,m,j;
printf ("Enter the value of n");
scanf("%d",&n);

printf ("Enter the value of n");
scanf("%d",&m);

int A[n];
printf("Enter %d values",n  );
for(int i = 0; i < n; ++i) {
     scanf("%d", &A[i]);
  }
int B[m];

printf("Enter %d values ",m);
  // taking input and storing it in an array
  for(int j = 0; j < m; ++j) {
     scanf("%d", &B[j]);
  }
printf("Intersection : ");
for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
        if(B[i]==A[j]){

         printf("%d ",B[i]);
}

  }

}
  return 0;}