#include<stdio.h>
#define MAX 20
int main()
{
    int front=-1;
    int rear=-1;
    int num,value;
    int place;
    printf("How many digits you want to enter?\n");
    scanf("%d",&num);
    int queue[num];
    float sum=0;
    for(int i=0;i<num;i++)
    {
        
        if(rear==MAX-1)
        {
            printf("Queue is FUll\n");
        }
        else
        {
            printf("enter the number\n");
            scanf("%d",&value);
            front=0;
            rear=rear+1;
            queue[rear]=value;
        }
        
    }
    if(num%2==0)
    {
        printf("Num is even\n");
        place=num/2;
        sum=queue[place]+queue[place-1];
        printf("Median is %1.2f\n",sum/2);
    }
    else
    {
    printf("Queue has odd number of terms\n");
    place=num/2;
    printf("Median is %d",queue[place]);
    }
    
    printf("The queue is\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    return 0;
}