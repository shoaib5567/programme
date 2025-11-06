//markscard
#include<stdio.h>
int main ()
{
	int x;
	printf("enter the marks \n \a");
	scanf("%d", &x);
	if (x>=90 && x<=100)
	{
		printf("congratulations you got o grade");
		
	}
	else if (x>50 && x<=89)
	{
		printf("congratulations you got a grade");
	}
	else if (x==50)
	{
		printf("you got grade b \nNeed to improve");
	}
	else
	printf("sorry you got F grade");
	
	return 0;
}
