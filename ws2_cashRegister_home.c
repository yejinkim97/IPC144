//==============================================
// Name:           Ye Jin Kim	
// Student Number: 163291180	
// Email:          yjkim33@myseneca.ca
// Section:        NZA
// Workshop:       2 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:

#include <stdio.h>

int main(void)
{
	int loonies, quarters, dimes, nickels, pennies;
	double balance, amount, gst;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

	gst = amount * .13 + .005;
	printf("GST: %.2lf\n", gst);

	amount = amount + gst;
	printf("Balance owing: $%.2lf\n", amount);


	loonies = (int)amount;
	balance = amount - (double)loonies;
	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, balance);

	quarters = balance / 0.25;
	balance = balance - (quarters * 0.25);
	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, balance);

	dimes = balance / 0.10;
	balance = balance - (dimes * 0.10);
	printf("Dimes required: %d, balance owing $%.2lf\n", dimes, balance);

	nickels = balance / 0.05;
	balance = balance - (nickels * 0.05);
	printf("Nickels required: %d, balance owing $%.2lf\n", nickels, balance);

	pennies = balance / 0.01;
	balance = balance - (pennies * 0.01);
	printf("Pennies required: %d, balance owing $%.2lf\n", pennies, balance);

	return 0;
}
