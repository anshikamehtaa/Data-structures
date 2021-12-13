#include<stdio.h>
#include<stdlib.h>
#define max 20
int rear=-1;
int front=-1;
int queue[max];
int isEmpty()
{
  if(front==-1||front==rear+1)
  return 1;
  else
  return 0;
}
int isFull()
{
    if(rear==max-1)
    {return 1;
    }
    else
    return 0;
}
void enq(int value)
{
    if(isFull())
    {
        printf("queue is full");
    }
    else
    {
        front=0;
        rear=rear+1;
        queue[rear]=value;
    }
}
void deq()
{
    if(isEmpty())
    {
        printf("queue is empty");
    }
    else
    {
        printf("The deleted value is %d",queue[front]);
        front=front+1;
    }
}
void display()
{
    if(isEmpty())
    {
        printf("Queue is empty");
        
    }
    else
    {
    for(int i=front;i<rear;i++)
    {
        printf("%d ",queue[i]);
    }
    }
}

int main ()
{
  int choice,value;
  while(1){
  printf ("Menu driven program to perform queue operation\n");
  printf ("1: Enqueue\n");
  printf("2: Dequeue\n");
  printf("3: Display\n");
  printf("4: Exit\n");
  printf("Enter your choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  printf("Enter the value\n");
  scanf("%d",&value);
  enq(value);
  break;
  case 2:
  deq();
  break;
  case 3:
   display();
  break;
  case 4:
 exit(0);
  break;
  default:
  printf("Entered choice is wrong\n");
  }
};
}
