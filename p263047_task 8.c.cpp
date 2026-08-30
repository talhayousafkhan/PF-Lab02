#include<stdio.h>
int main ()
{
	double principal= 250000.00;
	float rate= 8.5;
	int time= 3;
	
	
float	simple_interest_i= (principal*rate*time)/100.0;
float total_payable_amount_A= principal + simple_interest_i;	
float monthly_installment= total_payable_amount_A/(time*12.0);	
	
	printf("================== BANK LOAN INTEREST SUMMARY ==================\n\n");
	printf("Principal Amount:\t PKR %.2f\n", principal);
	printf("Annual Interest Rate:\t %.2f\%% \n", rate);
	printf("Loan Duration:\t\t %d Years (36 Months)\n\n", time);
	printf("----------------------------------------------------------------\n\n");
	printf("Total Accured Interest:\t PKR %.2f \n", simple_interest_i);
	printf("Total Payable Amount:\t PKR %.2f \n", total_payable_amount_A );
	printf("Monthly Installment:\t PKR %.2f \n\n",monthly_installment);
	printf("=================================================================\n");
	return 0;
	
}
