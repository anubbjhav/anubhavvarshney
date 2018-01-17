#include <stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>0)
    {
        printf("the number is positive");
    }
    else if(n<0)
    {
            printf("the number is negative");
    }
    else if(n==0)
    {
        printf("the number is equal to 0");
    return 0;
    }

    return 0;
}
