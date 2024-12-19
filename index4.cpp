#include<stdio.h>

int main()
{
	
	//WAP to different number and operator to display the result based on user choice operator.
	
	int numA, numB;
	char op;
	
	printf("Enter Num1 and operator and Num2 : ");
	scanf("%d %c%d",&numA,&op,&numB);
	
	if(op == '+'){
		printf("%d + %d : %d",numA,numB,(numA+numB));
	}
	else if(op == '-'){
		printf("%d - %d : %d",numA,numB,(numA-numB));
	}
	else if(op == '*'){
		printf("%d * %d : %d",numA,numB,(numA*numB));
	}
	else if(op == '/'){
		printf("%d / %d : %d",numA,numB,(numA/numB));
	}
	else{
		printf("Error.");
	}
	
	/*
	//WAP to input number and display the related month.
	
		
	int monthNum;
	
	printf("Enter a number for the month : ");
	scanf("%d",&monthNum);
	
	switch(monthNum){
		case 1 : printf("January."); break;
		case 2 : printf("February."); break;
		case 3 : printf("March."); break;
		case 4 : printf("April."); break;
		case 5 : printf("May."); break;
		case 6 : printf("June."); break;
		case 7 : printf("July."); break;
		case 8 : printf("August."); break;
		case 9 : printf("September."); break;
		case 10 : printf("October."); break;
		case 11 : printf("November."); break;
		case 12 : printf("December."); break;
default: printf("Error!");
	}
	
	
	*/
	
	/*
	
	//WAP to input single number and display the related day as 1 : Sunday, 2 : Monday......
	
	int dayNum;
	
	printf("Enter a number for the day : ");
	scanf("%d",&dayNum);
	
	switch(dayNum){
		case 1 : printf("Sunday."); break;
		case 2 : printf("Monday."); break;
		case 3 : printf("Tuesday."); break;
		case 4 : printf("Wednesday."); break;
		case 5 : printf("Thrusday."); break;
		case 6 : printf("Friday."); break;
		case 7 : printf("Saturday."); break;
default: printf("Error!");
	}
	
	*/
	
	
	
	/*
	
	//WAP to check input shape is circle or oval.
	
	int radiusVer, radiusHor;
	
	printf("Enter the Vertical-Radius and Horizontal-Radius : ");
	scanf("%d%d",&radiusVer,&radiusHor);
	
	if(radiusVer == radiusHor){
		printf("Circle.");
	}
	else{
		printf("Oval.");
	}
	
	*/
	
	/*
	
	//WAP to check input triangle is equalitral triangle or not.
	
	int sideA, sideB, sideC;
	
	printf("Enter Side A, B and C : ");
	scanf("%d%d%d",&sideA,&sideB,&sideC);
	
	if(sideA == sideB && sideB == sideC){
		printf("Equalitral Triangle.");
	}
	else{
		printf("Non Equilateral Triangle.");
	}
	
  */	
	
	
	/*
	
	//WAP to input cost price and selling price then check profit or loss.
	int costPrice, sellingPrice;
	printf("Enter Cost Price and Selling Price : ");
	scanf("%d%d",&costPrice,&sellingPrice);
	
	if(sellingPrice > costPrice){
		printf("Profit : Rs %d.",(sellingPrice-costPrice));
	}
	else{
		printf("Loss : Rs %d.",(costPrice-sellingPrice));
	} 
	
	*/
	
	return 0;
}


