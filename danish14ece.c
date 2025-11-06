#include<stdio.h>
int main()
{
	char grade;
	printf("enter your grade");
	scanf("%c",& grade);
	switch (grade)
	{case'a':
		printf("keep it up");
		break;
	case'b':
	    printf("very good");
		break;
	case 'c':
	printf("good");
	case 'd':
	printf("passed,work harder");
	break;
	case 'f':
	printf("failed");
	deafult:
	printf("invalid grade");
	break; 		
	}
	return 0;
}
