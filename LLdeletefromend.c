#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node
{
    int data;
    struct node *next;
};
void deletefirst()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
}
void deleteatend()
{
    struct node *ptr1=head;
    struct node *ptr2=head;
    
    while(ptr2->next!=NULL)
    {
        ptr1=ptr2;
        ptr2=ptr2->next;
    }
    ptr1->next=NULL;
    free(ptr2);
    ptr2=NULL;
    
}

void insert(int value)
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
int main()
{
   int value,num;
   printf("How many node you want to create ");
   scanf("%d",&num);
   for(int i=0;i<num;i++)
   {
   printf("Enter the value ");
   scanf("%d",&value);
   insert(value);
   }
   printf("Before deleting:\n");
   display();
   deletefirst();
   printf("\n");
   printf("After deleting from front:\n");
   display();
   
   
   printf("\n");
   deleteatend();
   printf("After deleting from end:\n");
   display();
   
   
   return 0;
}