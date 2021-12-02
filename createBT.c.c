#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int value)
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=value;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int main()
{
    struct node *p=create(5);
    struct node *p1=create(10);
    struct node *p2=create(15);
    struct node *p3=create(20);
    struct node *p4=create(25);
    
    //Linking of nodes to form a tree
    p->left=p1;
    p->right=p2;
    
    p1->left=p3;
    p1->right=p4;
return 0;    
}
