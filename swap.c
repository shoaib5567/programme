//program in c to swap two numbers
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the two numbers");
	scanf("%d%d",&x,&y);
	printf("numbers before swapping are %f & %f",x & y);
	//swappins
	x=x+y;
	y=x-y;
	x=x-y;
	printf("numbers after swappins are %d & %d",x,y);
	return 0;
}
