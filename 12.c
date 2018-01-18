#include <stdio.h>
#include<math.h>

int main()
{
    int n,p,r=0,y;
    printf("enter the number");
    scanf("%d",&n);
    p=n;
    while(n!=0)
    {
         y=n%10;
         r=r*10+y;
         n=n/10;
    }
    if(p==r)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    
    
    return 0;
}

