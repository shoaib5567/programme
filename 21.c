//program in c to display the series 2,4,8,16,...,n
#include<stdio.h>
int main()
{
	int n,i,z;
	printf("enter the number to be displayed");
	scanf("%d", &n);
	
	 for (i=2; i<=n; i++)
	 {
	 	z= pow(2,i);
	 	printf("%d", z);
	 }
}
