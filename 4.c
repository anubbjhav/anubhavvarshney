#include <stdio.h>

int main()
{
    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("it is character");
        
    }
    else
    {
    printf("not character");
    }

    return 0;
}
