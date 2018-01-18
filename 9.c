#include <stdio.h>

int main()
{
    int a[10],k,sum=0,n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of k");
    scanf("%d",&k);
    printf("enter the elements of array\n");
    for(int i=1;i<=n;i++)
    { 
        scanf("%d",&a[i]);
        
    }
    for(int i=1;i<=k;i++)
    {
    sum=sum+a[i];
    
    }
    printf("sum is%d",sum);
    
    return 0;
}
