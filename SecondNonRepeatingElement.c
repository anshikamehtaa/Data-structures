#include<stdio.h>
int main()
{
    int num,count=0,o=0;
    printf("How many elements do you want to enter\n");
    scanf("%d",&num);
    int arr[num];
    int temp[num];
    printf("Enter the elements of array\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            temp[j]=arr[i];
        }
    }
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
{
if(i!=j && arr[i]==temp[j])
count=1;
}
if(count==0)
o++;
if(o==2)
{
printf("second non repeating number: %d",arr[i]);
break;
}
count=0;
}
return 0;
}