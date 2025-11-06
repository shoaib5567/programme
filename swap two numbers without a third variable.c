//program in c to swap two numbers without using a third variable
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter two variables");
	scanf("%d%d", &x, &y);
	printf("before swapping %d and %d", x, y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swapping %d and %d",x,y);
	return 0;
}
