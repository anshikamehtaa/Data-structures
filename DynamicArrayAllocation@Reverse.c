#include<stdio.h>
#include<stdlib.h>
void print(int arr[],int num)
{
    for(int i=0;i<num;i++)
    {
    printf("%d",arr[i]);
    }
}
void reverse(int arr[],int start,int end)
{
  if(start<end)
  {
  int temp;
  temp=arr[start];
  arr[start]=arr[end];
  arr[end]=temp;
  reverse(arr,start+1,end-1);
  }
}
int main()
{
  int num;
  printf("How many elements do you want to enter\n");
  scanf("%d",&num);
  int *arr=(int *)malloc(sizeof(int));
  printf("Enter your elements\n");
  for(int i=0;i<num;i++)
  {
      scanf("%d",arr+i);
  }
reverse(arr,0,num-1);
print(arr,num);
}