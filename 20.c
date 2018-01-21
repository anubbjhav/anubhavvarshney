#include <stdio.h>


int main()
{
     int n,fact;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=5;i++)
    {
        fact=n*i;
        printf("%d ",fact);
    }

    
    return 0;
}
