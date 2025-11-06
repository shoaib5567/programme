//program in c to display the factors of a natural number
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number whose factors are to be found");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	if (n%i==0)
	printf("%d",i);
}
