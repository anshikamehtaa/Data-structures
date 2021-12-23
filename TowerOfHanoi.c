#include<stdio.h>
void TOH(int n,char A,char B,char C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("Move from %c to %c\n",A,C);
        TOH(n-1,B,A,C);
    }
}
int main()
{
    int num;
    printf("Enter how many disk do you wnat to enter?\n");
    scanf("%d",&num);
    TOH(num,'A','B','C');
    return 0;
}