//==============================================
// Name:           Ye Jin Kim	
// Student Number: 163291180	
// Email:          yjkim33@myseneca.ca
// Section:        NZA
// Workshop:       2 (in-lab)
//==============================================

// Start your code below:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int loonies, quarters;
	double balancex, balancey, amount;
	float GST;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

	GST = amount *.13 + .005;
	printf("GST: %fl\n", &GST);

	amount = amount+ (double)GST; 
	printf("Balance owing: $%f\n", &amount);

	loonies = (int)amount;
	balancex = amount - (double)loonies;
	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, balancex);

	quarters = balancex / 0.25;
	balancey = balancex - (quarters * 0.25);
	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, balancey);

	return 0;
}
