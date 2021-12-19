#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void display(struct node *head)
{
    struct node *temp;
    temp=head;
    if(head==NULL)
    {
        printf("Linked list has no value\n");
    }
    else
    {
        do
        {
            printf("%d ",temp->data);
            temp=temp->link;
            
        }while(temp!=head);
    }
}
void insert(struct node *head)
{
    struct node *temp;
    
    
    do{
        head=head->link
    }while(head!=head);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=
}
int main()
{
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    
    struct node *one;
    one=(struct node *)malloc(sizeof(struct node));
    
    struct node *two;
    two=(struct node *)malloc(sizeof(struct node));
    
    struct node *three;
    three=(struct node *)malloc(sizeof(struct node));
    
    struct node *four;
    four=(struct node *)malloc(sizeof(struct node));
    
    head->data=25;
    head->link=one;
    one->data=36;
    one->link=two;
    two->data=42;
    two->link=three;
    three->data=67;
    three->link=four;
    four->data=90;
    four->link=head;
    
    display(head);
    
    return 0;
    
}