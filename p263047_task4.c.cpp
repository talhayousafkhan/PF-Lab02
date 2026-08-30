#include<stdio.h>
int main()
{
	int a=42;
	char b='A';
	float c= 3.141590;
	double d= 98.75432;
printf("\t Type Name \t Variable Value \t Size in Memory \t \n");
printf("---------------------------------------------------------------------\n");
printf("\t char      \t'%c'           \t       %d byte(s)  \t \n",b, (int)sizeof(char));
printf("\t int       \t %d            \t       %d byte(s)  \t \n",a, (int)sizeof(int));
printf("\t float     \t %f     \t       %d byte(s) \t \n",c, (int)sizeof(float));
printf("\t double    \t %f     \t       %d byte(s)  \t \n",d, (int)sizeof(double));
printf("---------------------------------------------------------------------\n");


return 0;
}
