#include<stdio.h>
int main ()
{
	int x,n,i,j;
	printf("value of n");
	scanf("%d",&n);
 for(i=2;i<=20;i++)
 {
 	for(j=1;j<=n;j++)
 	{
 		x=i*j;
 		printf("%d*%d=%d\n",i,j,x);
 		printf("\n\n\n");
 	}
 }
}
