#include <stdio.h>
#include<math.h>

int main()
{
    int n,count=0,a,sum=0,r,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
        
        
    }
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+pow(r,count);
        temp=temp/10;
        
        
    }
    if(n==sum)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("not");
    }

    return 0;
}
