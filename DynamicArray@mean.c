#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,column;
    printf("How many rows do you want to create?:  ");
    scanf("%d",&row);
    printf("\n");
     printf("How many columns do you want to create?:  ");
    scanf("%d",&column);
    float mean=0;
    int *arr;
    arr=(int *)malloc((row*column)*sizeof(int));
    printf("Enter values in %dX%d matrix\n",row,column);
    for(int i=0;i<row*column;i++)
    {
        scanf("%d",&arr[i]);
        printf("\n");
    }
    for(int j=0;j<column;j++)
    {
        int sum=0;
        for(int i=0;i<row;i++)
        {
            sum=sum+arr[(i*column)+j];
        }
        mean=(float)sum/row;
        printf("Mean of column %d is %f\n",j,mean);
    }
    return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,r,c,sum=0;
    float mean=0;
    printf("\nEnter the rows: ");
    scanf("%d",&r);
    printf("\nEnter the columns: ");
    scanf("%d",&c);
    int *arr;
    
    arr=(int *)malloc((r*c)*sizeof(int));
    printf("\nEnter a %d x %d Martix-\n",r,c);

    for(i=0;i<r*c;i++)
    scanf("%d",&arr[i]);
    printf("\n");

    for(j=0;j<c;j++)
    {
        sum=0;
        for(i=0;i<r;i++)
        {
            sum=sum + arr[(i*c)+j];
        }
        mean=(float)sum/r; 
        printf("\nMean of column %d is %f\n",j,mean);
    }
    
    return 0;
}*/
