#include<stdio.h>
void main()
{
int n,i,j,temp;
printf("enter n");
scanf("%d",&n);
int a[n];
printf("enter array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(a[j]>a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
