#include<stdio.h>

int main()
{
	int num1,num2,choice;
	printf("enter two numbers num1 and num2 : ");
	scanf("%d%d",&num1,&num2);
	printf("\nfor addition-1");
	printf("\nfor substraction-2");
	printf("\nfor multiplication-3");
	printf("\nfor division-4");
	printf("\nfor modulas-5");
	printf("\nchoice 1,2,3,4,5");
	scanf("%d",&choice);
switch(choice)
	{
		case 1:
			{
			printf("addition of %d + %d = %d\n",num1,num2,num1 + num2);
			break;
		}
		case 2:
			{
				printf("substraction of %d - %d = %d\n",num1,num2,num1 - num2);
				break;
			}
		case 3:
			{
				printf("multiplication of %d * %d = %d\n",num1,num2,num1 * num2);
				break;
			}
		case 4:
			{
				printf("division of %d / %d = %d\n",num1,num2,num1 / num2);
				break;
			}
		case 5:	
		    {
		    	printf("modulas of %d % %d = %d\n",num1,num2,num1 % num2);
		    	break;
			}
		default:
			{
			
			    printf("not followinf appropriate method");
			    break;
			}
	}
	return 0;
}
