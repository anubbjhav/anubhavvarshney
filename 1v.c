#include<stdio.h>
int main()
{
int a[20],n,i,j,count=0;
printf("enter the n");
scanf("%d",&n);
printf("enter array values");
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
printf("answer is");
for(i=0;i<=n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
			printf("%d ",a[i]);
			count=count+1;
		}
	}
}
if(count==0)
{
	printf("UNIQUE");
}
}
