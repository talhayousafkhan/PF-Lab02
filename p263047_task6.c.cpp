#include<stdio.h>
int main()
{
	float radius= 7.5;
	float pi = 3.14159;
	float diameter = 2*radius;
float circumference =2*pi*radius;
 	float area = pi*radius*radius;
 	
	printf("============ CIRCLE GEOMETRY REPORT ====================\n");
	printf("Given Radius:    \t %.3fcm \t \n", radius);
	printf("Calculated Diameter:   \t %.3fcm \t \n", diameter);
	printf("Calculated Circumference: %.3fcm \t \n", circumference);
	printf("Calculated Area: \t %.3fsq.cm \t \n", area);
	printf("=========================================================\n");
	return 0;
}
