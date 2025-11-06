#include<stdio.h>
int main()
{
	int i, n, fact;
	printf("enter the number");
	scanf("%d", &n);
	if(n<1)
	{
		printf("number is not positive");
	}
	else
	{
		for(i=1; i<n; i++)
	{
	fact=fact*i;
    }
	printf("%d",fact);
	}
	return 0;
}
