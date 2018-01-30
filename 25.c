#include <stdio.h>

int main()
{
   int a[100],n;
   float sum=0;
   printf("enter n");
   scanf("%d",&n);
   printf("enter array");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
  
    for(int i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
  float y=sum/n;
   printf("median is%f",y);
   
