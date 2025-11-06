#include<stdio.h>
int main()
{
	int(a,b,c,d,r1,r2&d);
	printf("enter the value of a,b&c");
	scanf("%d%d%d",&a,&b,&c);
    (d=b*b-4*a*c)
	if(d>0)
	{r1=(-b+sqr(d))/(2*a);
	r2=(-b-sqr(d))/(2*a);
	
	printf("the equation has two real roots=%f&%f",r1,r2)
	}
	if(d==0)
	{
		r1=-b/(2*a);
		printf(the equation has only one root=%f,r1);
	}
	if(d<0)
	{
		printf("the equation has infinite roots")
	}
	return 0; 
