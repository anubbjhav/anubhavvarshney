#include <stdio.h>
#include<string.h>

int main()
{
    char a[30],t;
    int j=0,i;
    printf("enter string\n");
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++)
    {
        if(j==0)
        {
            a[i] = toupper(a[i]);
            j=1;
        }
        if(a[i] == " ")
        j=0;
    }
    printf("%s",a);
}
