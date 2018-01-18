#include <stdio.h>

int main()
{
    int n,count=0;
    printf("enter the integer");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
     {
         n=n/10;
         
         count++;
         
         
     }
     printf("sum is%d",count);
       
    return 0;
}
