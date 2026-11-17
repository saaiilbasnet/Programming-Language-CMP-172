/*
 * Problem: Given a cost price and a selling price, calculate and
 *          display the profit or loss.
 */
#include<stdio.h>

int main()
{
	int costPrice, sellingPrice;

	printf("Enter Cost Price and Selling Price : ");
	scanf("%d%d", &costPrice, &sellingPrice);

	if (sellingPrice > costPrice) {
		printf("Profit : Rs %d.", (sellingPrice - costPrice));
	} else {
		printf("Loss : Rs %d.", (costPrice - sellingPrice));
	}

	return 0;
}
