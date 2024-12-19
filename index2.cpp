#include<stdio.h>
#include<math.h>
int main(){
	//right angle triangle or not
	
	int h,p,b;
	printf("Enter Hypotaneous, Base and Height : ");
	scanf("%d%d%d",&h,&b,&h);
	
	if(pow(h,2)==pow(p,2)+pow(b,2)){
		printf("Right Angle Triangle.");
	}
	else{
		printf("Not an Right Angled Triangle.");
	}
	
	/*
	//real or faaakeee
	int radius;
	printf("Enter Radius : ");
	scanf("%d",&radius);
	
	if(radius<0){
		printf("The circle is imaginary.");
	}
	else{
		printf("The circle is real.");
	}
	*/
	
	/*
	//check the smallest among two numbers.
	
	int num1, num2;
	
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2){
		printf("%d is smaller then %d.",num2,num1);
	}
	else{
		printf("%d is smaller then %d.",num1,num2);
	}
	*/
	
	/*
	//input number is odd or even
	
	int num;
    printf("Enter number : ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("Even.");
	
	}
	else{
		printf("Odd.");
	}
		*/
	/*
	//input number is positive or negative
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Negative.");
	}
	else{
		printf("Positive.");
	}
	
	*/
	return 0;
}
