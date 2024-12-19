#include<stdio.h>

int main(){
	//WAP to print even number of the multi-digit numbers.
	
	int num,rem;
printf("Enter a number : ");
scanf("%d",&num);
int original = num;

while(num!=0){
	rem = num%10;
     if(rem%2==0){
     	printf("%d",rem);
	}
	num = num/10;
	
}

	
	
	//WAP to find the reverse of the input multi digit number.
//int num, i = 0,rem;
//printf("Enter a number : ");
//scanf("%d",&num);
//int original = num;
//
//while(num!=0){
//	rem = num%10;
//	i = i * 10 + rem;
//	num = num/10;
//}
//printf("The reverse of %d is %d.",original,i);


//WAP to print the sum of the entered multi-digit number.
//int num, i = 0,rem,sum=0;
//printf("Enter a number : ");
//scanf("%d",&num);
//int original = num;
//
//while(num!=0){
//	rem = num%10;
//	i = i * 10 + rem;
//	sum = sum + rem ;
//	num = num/10;
//}
//printf("The sum of all the digits of %d is : %d.",original,sum);
	
	

//	//WAP to find if the number inputted is palindrom or not.
//	int num,i=0,rem;
//	printf("Enter a number : ");
//	scanf("%d",&num);
//	int original = num;
//
//while(num!=0){
//	rem = num%10;
//	i = i * 10 + rem;
//	num = num/10;
//}
//
//if(i == original){
//	printf("Palindrome.");
//}
//
//else{
//	printf("Not a Palindrome.");
//}

	
	
	
//	
//	//WAP to find the perfect number i.e sum of factors of 6 is equal to 6
//	int num,i,counterNum=0;
//	printf("Enter a number : ");
//	scanf("%d",&num);
//	
//	for(i=1; i<num; i++){
//		if(num%i==0){
//			counterNum = counterNum + i;
//		}
//	}
//	if(counterNum == num){
//		printf("Perfect Number.");
//	}
//	else{
//		printf("Not an perfect number.");
//	}
//	
	
	
//	WAP to find the factorial.
//	int num,i,fact=1;
//	
//	printf("Enter a number for the factorial: ");
//	scanf("%d",&num);
//	if(num<0){
//		printf("Error, Negative Number.");
//	}
//	else{
//	
//	for(i = 1 ; i<=num; i++){
//		fact = fact * i;
//	} }
//	printf("The factorial of %d is %d.",num,fact);
	

	
	//WAP to print  the multiplication table for the user input number.
//	int i,num;
//	printf("Enter the number for the multiplication table : ");
//	scanf("%d",&num);
//	
//	for(i=1; i<=10; i++){
//		printf("%d * %d = %d\n",num,i,num*i);
//	}

	
	/*
	
	//WAP to print the sum of first 50 odd numbers.
		int i,sum=0;
	for(i=1; i<=50; i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}
	printf("The sum of odd numbers upto 1 to 50 is : %d.",sum);
	
	*/
	
	/*
	//calculate the sum of 1 to 100 even numbers
	
	int i,sum=0;
	for(i=1; i<=100; i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	printf("The sum of even numbers upto 1 to 100 is : %d.",sum);
	
	*/
	
	/*
	
	//calculate the sum of first 10 natural numbers.
	int i, sum = 0;
	
	for(i=1; i<=10; i++){
		sum=sum+i;
	}
	printf("The sum of first 10 natural number is : %d.",sum);
	
	*/
	
	return 0;
}
