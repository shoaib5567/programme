#include<stdio.h>
int main()
{
	int choice;
	printf("enter your choice");
	scaf("%d", & choice);
	switch (choice)
	{
		case'1'
	 printf("english");
	 break;
		case'2'
		printf("hindi");
		break;
		case'3'
		printf("urdu");
		deafult:
		printf("invalid choice");
		break;
	}
return 0;
}
