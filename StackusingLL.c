#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int isEmpty(struct node *top)
{
    if(top==NULL)
    return 1;
    else
    return 0;
}
int isFull(struct node *top)
{
   struct node *p=(struct node *)malloc(sizeof(struct node));
   if(p==NULL)
   return 1;
   else 
   return 0;
}
void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
struct node *push(struct node *top,int element)
{
   
   if(isFull(top))
   {
       printf("Stack overflow\n");
   }
   else
   {
       struct node *n=(struct node *)malloc(sizeof(struct node));
       n->data=element;
       n->link=top;
       top=n;
       return top;
   }
}
int pop(struct node *top)
{
   
   if(isEmpty(top))
   {
       printf("Stack underflow\n");
   }
   else
   {
      struct node *n=top;
      top=top->link;
      int x=n->data;
      free(n);
      return x;
   }
}
int main()
{
    int element;
   struct node *top=NULL;
  top=push(top,78);
  top=push(top,32);
  top=push(top,48);
  traversal(top);
  int output=pop(top);
  printf("Popped value is %d",output);
   
}