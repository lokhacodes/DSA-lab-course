#include <stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main ()
{

    printf("Enter the number of elements in the stack ");
    scanf("%d",&n);

   push(0);
    push(6);
    push(9);
    push(9);
    pop();
    push(21);
    push(30);
    push(0);
    push(0);
    push(0);
    push(0);
    push(0);
    pop();
    pop();
    push(510);
    push(10);
    pop();
    push(10);
    push(21);





     for (i=0;i<=top;i++)
    {
        printf("%d",stack[i]);
    }

}

void push (int val)
{

    if (top == n )
    printf("\n Overflow");
    else
    {

        top = top +1;
        stack[top] = val;
    }
}

void pop ()
{
    if(top == -1)
    printf("Underflow");
    else
    top = top -1;
}
