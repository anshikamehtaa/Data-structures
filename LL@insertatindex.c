#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node
{
    int data;
    struct node *next;
};


void insertatbeginning(int value)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
void inbetween(int value,int position)
{   
    struct node *ptr;
    ptr=head; 
    
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    
    temp->data=value;
    temp->next=NULL;
    
    position--;
    while(position!=1)
    {
        ptr=ptr->next;
        position--;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    
}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
        
    }
    
}
void insertatend(int value)
{   
    struct node *ptr;
    ptr=head;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    temp->data=value;
    temp->next=NULL;
    ptr->next=temp;
    
}
int main()
{
   int value,num,new,position;
   printf("How many node you want to create ");
   scanf("%d",&num);
   for(int i=0;i<num;i++)
   {
   printf("Enter the value ");
   scanf("%d",&value);
   insertatbeginning(value);
   }
   printf("Enter value for end ");
   scanf("%d",&new);
   insertatend(new);
   
   printf("Enter value for in between and position ");
   scanf("%d %d",&new,&position);
   inbetween(new,position);
   display();
   return 0;
}