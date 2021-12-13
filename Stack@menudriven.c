#include<stdio.h>
#include<stdlib.h>
#define max 20
int top=-1;
int stack[max];
void push(int value)
{
    if(top==max-1)
    {
     printf("Stack is full\n");
    }
    else
    
    top=top+1;
    stack[top]=value;
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    printf("The popped element is %d ",stack[top]);
    top=top-1;
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
    }
}

int main()
{
    int choice,value;
    while(1){
    printf("The menu for performing stack operations are\n");
    printf("1: Push elements in stack\n");
    printf("2: Pop element from the stack\n");
    printf("3: Display elements of the stack\n");
    printf("4: Exit from the program\n");
    printf("Enter your desired choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the element to push\n");
        scanf("%d",&value);
        push(value);
        break;
        case 2:
        pop();
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
