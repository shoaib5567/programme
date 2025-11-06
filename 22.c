//program in c to display the series 2,4,16,156,...,n
#include<stdio.h>
int main()
{
	int n,i;
	long long int x, sum;
	x=2;
	printf("enter the number of terms");
	scanf("%d", &n);
	
	for(i=2; i<=n; i++)	
	{
		sum= sum+x;
		x= x*x;
		printf("the sum of terms =%d");
	}
}
