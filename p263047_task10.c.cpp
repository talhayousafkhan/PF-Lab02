#include<stdio.h>
int main()
{
	float PF_marks= 88.0;
	int PF_hours=3;
	float CAG_marks=76.5;
	int CAG_hours=3;
	float AP_marks=82.0;
	int AP_hours=2;
	
	float Total_weighted_score=88.0*3+76.5*3+82.0*2;
	int Total_credit_hours= 8;
float	weighted_average_percentage= Total_weighted_score/Total_credit_hours;
	
	printf("=================== SEMESTER ACADEMIC REPORT ==========================\n");
	printf("Course\t\t\t Credit Hours\t\t Obtained Marks\n");
	printf("-------------------------------------------------------------------\n");
	printf("Programming fund.\t  %d",PF_hours); printf("\t\t\t %.2f\n",PF_marks);
	printf("calculus\t\t  %d",CAG_hours); printf("\t\t\t %.2f \n",CAG_marks);
	printf("Applied Physics\t\t  %d",AP_hours); printf("\t\t\t %.2f\n",AP_marks);
	printf("------------------------------------------------------------------\n");
	printf("Total Credits %d ", Total_credit_hours); printf("\t\t\t Weighted average: %.2f%% \n",weighted_average_percentage);
	printf("==================================================================");
	
	return 0;
}
