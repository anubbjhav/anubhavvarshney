#include<stdio.h>
int main()
{
	int h1,h2,m1,m2,min,hr,hour,minutes,h;
	printf("Enter time");
	scanf("%d%d",&h1,&m1);
	printf("\nenter the time smaller than first time");
	scanf("%d%d",&h2,&m2);
	hr=h1-h2;
	min=m1-m2;
	h=(hr*60)+min;
	hour=h/60;
	minutes=h%60;
	printf("\ntime is %d %d",hour,minutes);
	return 0;
}
