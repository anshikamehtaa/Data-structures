#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void delete(struct node * ptr)
{ 
    struct node *temp;
    while(ptr!=NULL)
   {
    printf("%d ",ptr->data);
    
    temp=ptr->next;
    ptr=temp->next;
    free(temp);  
   }
 
}
int main()
{
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *four;
    struct node *five;
    
    head=(struct node *)malloc(sizeof(struct node));
    one=(struct node *)malloc(sizeof(struct node));
    two=(struct node *)malloc(sizeof(struct node));
    three=(struct node *)malloc(sizeof(struct node));
    four=(struct node *)malloc(sizeof(struct node));
    five=(struct node *)malloc(sizeof(struct node));
    
    head->data=5;
    head->next=one;
    
   
    one->data=10;
    one->next=two;
    
    
    two->data=15;
    two->next=three;
    
    
    three->data=20;
    three->next=four;
    
    
    four->data=25;
    four->next=five;
    
    
    five->data=30;
    five->next=NULL;
    
    display(head);
    printf("\n");
    printf("Values after deletion\n");
    delete(head);
    
 return 0;   
}
