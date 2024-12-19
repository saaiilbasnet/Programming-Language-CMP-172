#include<stdio.h>

int main()
{
	
	//WAP to input radius and display the user choice area or perimeter.
	
	int choiceNum;
	float radius;
	printf("Enter Radius : ");
	scanf("%f",&radius);
	if(radius<0)
	{
		printf("Error!, Imaginary Circle.");
	}
	else{
s
	printf("Enter Your Choice : \n");
	
	printf("\n1. Area\n2. Perimeter.\n Enter: ");
	scanf("%d",&choiceNum);
	
	switch(choiceNum){
		case 1 : printf("Area : %f.",(3.14*radius*radius)); break;
		case 2 : printf("Perimeter : %f.",(2*3.14*radius)); break;
		default : printf("Error!");
	}
}
	
	
	/*
	int numA, numB;
	char op;
	
	printf("Enter first num, an operator and last number : ");
	scanf("%d %c%d",&numA,&op,&numB);
	
	switch(op){
		case '+': printf("%d + %d = %d.",numA,numB,(numA+numB)); break;
		case '-': printf("%d - %d = %d.",numA,numB,(numA-numB)); break;
		case '*' : printf("%d * %d = %d.",numA,numB,(numA*numB)); break;
		case '/' : printf("%d / %d = %d.",numA,numB,(numA/numB)); break;
        default : printf("Error.");
	}
	
	*/
	
	/*
	//WAP to dsiplay the day as the user input number for them.
	
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
	//to check if the number is odd or even *switch case
	
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	switch(num%2){
		case 0 : printf("Even."); break;
		case 1 : printf("Odd."); break;
		default : printf("Error.");
	}
	
	*/
	
	return 0;
}
