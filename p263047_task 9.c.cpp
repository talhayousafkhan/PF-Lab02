#include<stdio.h>
int main ()
{
	double basic_salary=85000.00;
	
	float HRA= 0.20*basic_salary;
	float MA= 0.10*basic_salary;
	float gross_salary= basic_salary+HRA+MA;
	float ITD=0.05*gross_salary;
	float net_salary=gross_salary-ITD;
	
	printf("================ MONTHLY SALARY SLIP ================\n");
	printf("Basic Salary: \t\t\t PKR %.2f\n", basic_salary);
	printf("House Rent Allowance (20%%): \t PKR %.2f\n", HRA);
	printf("Medical Allowance (10%%): \t PKR %.2f\n", MA);
	printf("-----------------------------------------------------\n");
	printf("Gross salary:  \t\t PKR %.2f\n",gross_salary);
	printf("Tax Deduction(5%%): \t PKR %.2f\n",ITD);
	printf("-----------------------------------------------------\n");
	printf("Net Payable Salary: \t PKR %.2f\n",net_salary);
	printf("======================================================");
	
	
	
return 0;
	
}
