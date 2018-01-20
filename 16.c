#include<stdio.h>

int main(){

    int j,i,count,n,m;

     printf("enter the number n,m : ");
    scanf("%d%d",&n,&m);

    for(i = n;i<=m;i++){

         count = 0;

         for(j=2;j<=i/2;j++){
             if(i%j==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && i!= 1)
             printf("%d ",i);
    }
  
   return 0;
}




