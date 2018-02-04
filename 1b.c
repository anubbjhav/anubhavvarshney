
#include <stdio.h>
#include<string.h>
int main() 
{
	int aa,bb,max=0,i;
	char a[100],b[100];
	printf("enter the first string\n");
	scanf("%s",a);
	printf("enter the second string\n");
	scanf("%s",b);
	aa=strlen(a);
	bb=strlen(b);
	if(aa>bb)
	{
		max=aa;
	}
	else
	{
		max=bb;
	}
	for(i=0;i<max;i++)
	{
		if(a[i]==b[i])
		{
			printf("%c",a[i]);
		}
		else
		{
			break;
		}
	}
	return 0;
}
