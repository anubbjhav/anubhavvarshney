#include <stdio.h>
int main()
{
    int n,sum=0,n1;
    printf("enter n");
    scanf("%d",&n);
    while(n)
    {
        n1=n%10;
        n=n/10;
        sum=sum+(n1*n1);
    }
    printf("%d",sum);
    return 0;
}
