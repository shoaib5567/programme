//program in c to display the factorial of the series 1 2 3,...n
#include<stdio.h>
int main()
{
	int n,i,factorial;
	factorial=1;
	printf("enter the number of items you wish to display in the series");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("the factorial of the series is %d", &factorial);
	
}
