#include<stdio.h>
#define N 5
#define NULL 0

int F=0,R=0;
int Queue[N];

void qinsert(char item){
if((F==1 && R==N)|| (F==R+1)){
    printf("Overflow");
    exit(1);
}

if(F==NULL && R==NULL){
    F=1;
    R=1;
}
else if (R==N){
    R=1;
}
else
    {
        R=R+1;
        }
Queue[R]=item;

}

void qdelete( char item){
    if(F==NULL){
        printf("Underflow");
    }
item=Queue[F];
Queue[F]=' ';
if (F==R){
    F=0;
    R=0;
}
else if (F==N){
    F=1;
}
else
    F=F+1;
}
  void display(){

    for(int i=1;i<N;i++){
    printf("|%c| ",Queue[i]);}
    printf("\n");

  }
int main(){
    qinsert('A');
    display();
    qinsert('B');
    display();
    qinsert('C');
    display();
    qdelete('A');
    display();
    qinsert('D');
    display();
    qinsert('E');
    display();
    qdelete('B');
    display();
    qdelete('C');
    display();
    qinsert('F');
    display();
    qdelete('D');
    display();
    qinsert('G');
    display();
    qinsert('H');
    display();
    qdelete('E');
    display();
    qdelete('F');
    display();
    qinsert('K');
    display();
    qdelete('G');
    display();
    qdelete('H');
    display();
    qdelete('K');
    display();



    }
