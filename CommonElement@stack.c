#include<stdio.h>
#define MAX 20
int insert(int stack[],int top,int num)
{
    int value;
  for(int i=0;i<num;i++)
    {
    if(top==num-1)
    {
     printf("Stack is FUll\n");   
    }
    else
    {
        printf("Enter the value to insert in stack\n");
        scanf("%d",&value);
        top=top+1;
        stack[top]=value;
    }
    }  
    return top;
}
void display(int stack[],int top)
{
    for(int i=top;i>0;i--)
    printf("%d ",stack[i]);
}
void compare(int stack1[],int stack2[],int num)
{
   for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(stack1[i]==stack2[j])
            printf("Intersection between the stacks is %d\n",stack1[i]);
           
        }
        
    } 
}
int main()
{
    int num;
    
    printf("How many elements do you want to enter in stack?\n");
    scanf("%d",&num);
    int stack1[num];
    int stack2[num];
    int top1=-1;
    int top2=-1;
    printf("Stack 1\n");
    top1=insert(stack1,top1,num);
    
    printf("Stack 2\n");
    top2=insert(stack2,top2,num);
    
    compare(stack1,stack2,num);
}