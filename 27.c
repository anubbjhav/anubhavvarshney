# #include<stdio.h>
int main()
{
    char x;
    printf("enter string");
    scanf("%c",&x);
    if((x>='a'&&x<'z')||(x>='A'&&x<='Z'))
    {
        printf(" no");
    }
    else
    {
        printf( "yes");
    }
    return 0;
}

