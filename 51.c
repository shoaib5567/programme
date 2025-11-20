//program in c to find the sum of diagonal elements of a matrix
#incude<stdio.h>
int main ()
{
	int n,i,j,sum=0, a[10][10];
	printf("enter order of square matrix");
	scanf("%d",&n);
	printf("enter elements of matrix /n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		for(i=0;i<n-1;i++ )
		{
			for(j=0;j<n-1;j++)
		}
		if i=j
		sum=sum+a[i][j];
		printf("sum of main diagonal=%d",sum);
		return 0;
	
}
