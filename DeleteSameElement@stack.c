#include<stdio.h>
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
int pop(int stack1[],int stack2[],int val,int num)
{
    int i,j;

    for(i=0;i<num;i++)
    {
        if(val==stack1[i])
        {
            for(j=i;j<num-1;j++)
            {
                stack1[j]=stack1[j+1];
            }
        } 
    }
    for(i=0;i<num;i++)
    {
        if(val==stack2[i])
        {
            for(j=i;j<num-1;j++)
            {
                stack2[j]=stack2[j+1];
            }
        } 
    }
    num=num-1;
    return num;
}
void display(int stack[],int top)
{
    for(int i=top-1;i>=0;i--)
    printf("%d ",stack[i]);
}
int compare(int stack1[],int stack2[],int num)
{
   for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(stack1[i]==stack2[j])
            {printf("\n%d is the same element of stack \n",stack1[i]);
            num=pop(stack1,stack2,stack1[i],num);
            }
        }
        
    }
    return num;
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
    
    num=compare(stack1,stack2,num);
    
    display(stack1,num);
    printf("\n");
    display(stack2,num);

}