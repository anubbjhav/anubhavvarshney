#include <stdio.h>

int main()
{
  int n,r=0
  printf("enter n");
  scanf("%d",&n);
  while(n>0)
  {
      
      r=r*10+n%10;
      n=n/10;
  }
  
  printf("reverse is %d",r);

    return 0;
}

