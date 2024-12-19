#include<stdio.h>
#include<math.h>
int main()
{
	/*
	//alternative for prime and composite
	
	int num,rem,temp=1,counter=0; //bug arrives here (1)
	printf("Enter : ");
	scanf("%d",&num);
	
	line: 
	rem = num%temp;
	if(rem==0){
		counter++;
	}
	temp++;
	if(temp<=num) goto line;
	
	if(counter==2){
		printf("Prime.");
	}
	else{
		printf("Composite.");
	}
	*/
	
	
	/*
	//to display middle number between three numbers.
	
	int num1,num2,num3;
	
	printf("Enter 3 numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	
		if(num1>num2 && num1<num3)
	{
		printf("The middle number is %d.",num1);
	}
	else if(num2>num1 && num2<num3)
	{
		printf("The middle number is %d.",num2);
	}
	else if(num3>num1 && num3<num2){
		printf("The middle number is %d.",num3);
	}
	else{
		printf("Error.");
	}
	
	
	*/
	
	/*
	
	//alternative
	if(num1>num2 || num2>num1 && num1>num3||num3>num1)
	{
		printf("The middle number is %d.",num2);
	}
	else if(num1>num3 || num3>num1 && num1>num2 || num2>num1){
		printf("The middle number is %d.",num3);
	}
	else{
		printf("The middle number is %d.",num1);
	}
	*/
	
	/*
	//check if the entered length and breadth represent a square or rectangle.
	int length, breadth;
	
	printf("Enter Length and Breadth : ");
	scanf("%d%d",&length,&breadth);
	
	if(length == breadth){
		printf("Square.");
	}
	else{
		printf("Rectangle.");
	}
	
	*/
	
	/*
	//check input number if it is prime or composite.
	int num,i,counter=0;
	 
	printf("Enter : ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		if(num%i==0){
			counter++;
		} 
	}
	
	if(counter==2){
		printf("Prime.");
	}
	else{
		printf("Composite.");
	}
	
	*/
	/*
	//check input number is square or not.
	
	int num,temp1,temp2;
	printf("Enter : ");
	scanf("%d",&num);
    temp1 = sqrt(num);
    temp2 = num%temp1;
	
	if(temp2 == 0){
	printf("Perfect square.");	
	}
	else{
	printf("Not an perfect square.");	
	}
	*/
	return 0;
}
