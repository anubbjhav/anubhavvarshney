#include <stdio.h>
int main()
{
  int n,m;
  printf("enter the two numbers\n");
  scanf("%d%d",&n,&m);
  for(int i=n+1;i<=m-1;i++)
  {
      if(i%2==0)
      {
          printf("%d\n",i);
      }
      
  }

    return 0;
}
