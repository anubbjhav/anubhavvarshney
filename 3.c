#include <stdio.h>

int main()
{
    char ch;
    printf("enter any char\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("it is vowel");
    }
        else
        printf("it is consonant");
        
    
    return 0;
}
