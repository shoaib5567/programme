//program in c to check whether a year is a leap year or not
#include<stdio.h>
int main()
{
	int y;
	printf("enter the year to be checked");
	scanf("%d", &y);
	if (((y%4==0)&&(y%100!=0))||(y%400!=0))
    printf("%d is a leap year",y);
	else
	printf("%d is not a leap year",y);
}
