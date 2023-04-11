#include<stdio.h>



int n=15;
char T[]={'\0','D','A','F','E','B','R','T','G','Q','\0','\0','V','\0','J','L'};

int grc(int index)
{
    if(T[index]!='\0' && ((2*index+1)<=n))
        return (2*index)+1;
    return -1;
}
int glc(int index)
{
    if(T[index]!='\0' && ((2*index)<=n))
        return (2*index);
    return -1;
}
void in_order(int index){
    if(index>0 && T[index]!='\0')
    {
        in_order(glc(index));
        printf("%c\t",T[index]);
        in_order(grc(index));
    }
}

void pre_order(int index){
    if(index>0 && T[index]!='\0')
    {
        printf("%c\t",T[index]);
        pre_order(glc(index));
        pre_order(grc(index));
    }
}
void post_order(int index)
{
    if(index>0 && T[index]!='\0')
    {
        post_order(glc(index));
        post_order(grc(index));
        printf("%c\t",T[index]);
    }
}
int main()
{
    int a;

    printf("Root index of the tree is, a : ");
    scanf("%d",&a);

    printf("In order is: \n");
    in_order(a);



    printf("\nPre order is: \n");
    pre_order(a);



    printf("\nPost order is: \n");
    post_order(a);
    return 0;
}











