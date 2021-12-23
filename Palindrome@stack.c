#include<stdio.h>
#include<string.h>
#define max 20
char stack[max]={'\0'};
char top=-1;
void push(char value)
{
    if(top==max-1)
    {
        printf("String is full\n");
    }
    else
    top=top+1;
    stack[top]=value;
}
char pop()
{
    char element;
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else
    element=stack[top];
    
    stack[top]='\0';
    top=top-1;
    return element;
    
}
int main()
{
    char str[max];
    printf("Enter the string\n");
    scanf("%s",str);
    int length=strlen(str);
    int i=0;
    while(i<length)
    {
       push(str[i]);
        i++;
    }
    i=0;
    while(i<length)
    {
        if(pop()!=str[i])
        break;
    i++;
    }
    if(i==length)
    printf("String is palindrome\n");
    else
    printf("String is not palindrome\n");
}