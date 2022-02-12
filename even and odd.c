#include<stdio.h>

int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	
switch(num%2)
	{
case 0:
{
	printf("number is even");
	break;
	}
	
	case 1:
	printf("number is odd");
		}
		return 0;
}
