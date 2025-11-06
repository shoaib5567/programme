#include<stdio.h>
int main()
{
	int n,i;
	printf("enter 'n' value");
	scanf("%d", &n);
	printf("the series is");
	for(i=n; i>=1; i--)
	{
		printf("%d",i);
	}
	return 0;
	
}
