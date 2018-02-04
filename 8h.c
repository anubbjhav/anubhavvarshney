#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
    int p=0 , i;
    printf("enter string\n");
    gets(a);
    for(i=0;i<a[i]!='\0';i++)
    {
	if(i==0)
	{
		a[i] = a[i] - 32;
	}
	if(a[i] == ' ')
	{
		a[i+1] = a[i+1] - 32 ; 
	}
	printf("%c",a[i]);
}

}
