#include<stdio.h>
int main()
{
	int Tea_quantity=3; 
	float Tea_price=60.00;
	int Samosa_quantity=4; 
	float samosa_price= 40.50;
	int chicken_roll_quantity=2;
	float chicken_roll_price=120.00;
	
	float subtotal= Tea_quantity*Tea_price;
	float subtotall= Samosa_quantity*samosa_price;
	float subtotalll= chicken_roll_quantity*chicken_roll_price;
	float subtotallll= subtotal+subtotall+subtotalll;
	float gst= 0.16*subtotal;
	float gstt=0.16*subtotallll;
	float payable_amount=subtotal+gst;
	float grand_total= gstt+subtotallll;

	
	printf("============ FAST CAFETERIA RECIPT ===========\n");
	printf("Item \t\t Qty \t\t Unit Price (PKR)    Subtotal (PKR) \n");
	printf("------------------------------------------------------\n");
	printf("Tea  \t\t %d",Tea_quantity); printf("\t\t  %.2f",Tea_price); printf("\t\t\t%.2f \n",subtotal);
	printf("Samosa \t\t %d",Samosa_quantity); printf("\t\t %.2f",samosa_price); printf("\t\t\t %.2f \n",subtotall);
	printf("Chicken Roll \t %d",chicken_roll_quantity); printf("\t\t %.2f",chicken_roll_price); printf("\t\t\t %.2f \n",subtotalll);
	printf("---------------------------------------------------------\n");
	printf("Subtotal: \t\t\t\t PKR %.2f\n",subtotallll );
	printf("GST (16%%): \t\t\t\t PKR %.2f\n",gstt);
	printf("----------------------------------------------------------\n");
	printf("Grand Total: \t\t\t\t  PKR %.2f\n", grand_total);
	printf("============== THANK YOU FOR YOUR VISIT ==================");
	return 0;
	
}
