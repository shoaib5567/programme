//write a program in c to check whether a number is positive or negative
#include<stdio.h>
int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	if(x>0)
	{
		printf("%d is a positive number",x);
	}
	if(x<0)
	{
		printf("%d is a negative number",x);
	}
	return 0;
}
