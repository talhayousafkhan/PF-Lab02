#include<stdio.h>
int main()
{
	float celsius= 37.5;
	float fahrenheit = celsius*9.0/5.0+32;
float	kelvin = celsius + 273.15;
	printf("============= TEMPRATURE CONVERSION ================\n");
	printf("Temprature in Celsius:      \t %.2f  °C\n", celsius);
	printf("Temprature in Fahrenheit: \t %.2f °F \n", fahrenheit);
	printf("Temprature in Kelvin:     \t %.2f K \n",kelvin);
	printf("==========================================================");
	return 0;
	
}
