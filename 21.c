#include<stdio.h>
int main() {
	int a,d,n,i,tn,sum=0;
	printf("enter the A,N,D number of the A.P.  ");
	scanf("%d%d%d",&a,&n,&d);
	for(int i=1;i<=n;i++)
	{
	sum = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;

	}
		printf("sum is%d",sum);
	return 0;
}
