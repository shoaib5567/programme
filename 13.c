//program in c to display the series 1 2 3 ... n
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number to be displayed");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		printf("%d",i);
	}
}
