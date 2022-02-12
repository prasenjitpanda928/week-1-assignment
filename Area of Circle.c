#include<stdio.h>
#define pi 3.14
int main()
{
	float rad,diameter,circum,area;
	
	printf("enter the radius : ");
	scanf("%f",&rad);
	
	printf("diameter of circle is %f\n",diameter=2*rad);
	printf("circumference is %f \n",circum=2*pi*rad);
	printf("area is %f",area=pi*rad*rad);
	
	return 0;
}
