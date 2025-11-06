//program in c to find sum of the series 1,2,3,...,n
#include<stdio.h>
int main()
{
	int n,i,sum;
	sum = 0;
	printf("enter the number of items you wish to display in the series");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("the sum of series is %d",& sum);
}
