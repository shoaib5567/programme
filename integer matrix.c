//program in c to display an integer matrix
#include<stdio.h>
int main ()
{
	int a[10][10];
	int m,n,i,j;
	printf("enter the number of rows and columns of the matrix");
	scanf("%d",&n,&n);
	printf("enter the elements of the matrix");
	for(i=0;i<=m-1;i++)
	for(j=0;j<=n-1;j++)
	scanf("%d", &a[i][j]);
	//display the matrix
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%d",a[i][j])
		}
		printf("/n");
	}
	return 0;
}
