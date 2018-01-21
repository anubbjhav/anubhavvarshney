# #include <stdio.h>
#include<math.h>

int main()
{
    int n,count=0,a,sum=0,r,temp1,m,temp2,i;
    printf("enter 2 the number");
    scanf("%d%d",&n,&m);
    
    for( i=n+1;i<m;i++)
    {
        count=0;
        sum=0;
        temp2=i;
        temp1=i;
    while(temp1!=0)
    {
        count++;
        temp1=temp1/10;
        
        
    }
    
    while(temp2!=0)
    {
        
        r=temp2%10;
        sum=sum+pow(r,count);
        temp2=temp2/10;
        
        
    }
    if(sum==i)
    {
        printf("numbers are %d\n",i);
    }
    
    }
    
    
    return 0;
}
