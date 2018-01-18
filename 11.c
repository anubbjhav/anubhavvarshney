#include <stdio.h>
#include<math.h>

int main()
{
    int n,m,sum;
    printf("enter the value of n and m\n");
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        sum=pow(n,m);
         
    }
    printf("the power is%d",sum);
    return 0;
}
