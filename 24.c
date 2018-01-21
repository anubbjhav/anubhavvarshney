#include <stdio.h>
int main()
{
    int i, n, a[100],temp;
    printf("Enter total number of elements\n");
    scanf("%d", &n);
    printf("enter the elements");
    for(i=0; i<n; i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}



