#include<stdio.h>
//Udf

//Find the sum upto n number using recursive function
int sumFun(int);

int main(){
int num, sum;
printf("Enter any number: ");
scanf("%d",&num);
sum = sumFun(num);
printf("The sum upto %d is %d.",num,sum);	
}

int sumFun(int num){
	if(num==0){
		return 0;
	}
	else{
		return num + sumFun(num-1);
	}
}

//Find the sum of multidigit inputted number using recursive funtion

//int sumFun(int);
//
//int main(){
//	int num,sum;
//	printf("Enter any number : ");
//	scanf("%d",&num);
//	sum = sumFun(num);
//	printf("The sum of %d is %d.",num,sum);
//}
//
//int sumFun(int num){
//	if(num==0){
//		return 0;
//	}
//	else{
//		return (num % 10) + sumFun(num / 10);
//	}
//}

//Find factorial of inputted number using recurive function.
//int facto(int);
//int main(){
//	int num;
//	printf("Enter : ");
//	scanf("%d",&num);
//	int fact = facto(num);
//	printf("The factorial of %d is %d.",num,fact);
//}
//
//int facto(int num){
//	if(num==0){
//		return 1;
//	}
//	
//	else{
//		return num*facto(num-1);
//	}
//}

//Calculate the sum of entered numbers of multi-digit numbers i.e 123 = 1+2+3 = 6
//
//int sumFun();
//int main(){
//	sumFun();
//}
//
//int sumFun(){
//	
//	int num,rem,i;
//	
//	printf("Enter any number: ");
//	scanf("%d",&num);
//	
//	int original = num, sum=0;
//	
//	while(num!=0){
//		rem = num%10;
//		sum = sum + rem;
//		i = i*10 + rem;
//		num = num/10;
//	}
//	
//	printf("The sum of %d is %d.",original,sum);
//	
//}


//Calculate the factorial of inputted number usind user-define functions
//int facto();
//
//int main(){
//	facto();
//}
//
//int facto(){
//	int i,num;
//	long fact=1;
//	printf("Enter any number : ");
//	scanf("%d",&num);
//	
//	if(num<0){
//		printf("The factorial of negative number is unavailable!");
//	}
//	
//	else if(num==0){
//		printf("The factorial of 0 is 1.");
//	}
//	
//	else{
//		for(i=1; i<=num; i++){
//			fact = fact * i;
//		}
//		printf("The factorial of %d is %ld.",num,fact);
//	}
//}



//2,6,8,14,......10th

//int series();
//
//int main(){
//	series();
//}
//
//int series(){
//	int i;
//	for(i=1; i<=10; i++){
//		printf("%d, ",i*2);
//	}
//}



//Fibonacci series generation using udf
//int seriesFun();
//
//int main(){
//	seriesFun();
//}
//
//int seriesFun(){
//	int i;
//	int a=1,b=1,fibo=0;
//	
//	for(i=1; i<=10; i++){
//		a=b;
//		b=fibo;
//		fibo = a + b;
//		printf("%d, ",fibo);
//	}
//}


//1,4,9,16,.........1000
//int seriesFun();
//
//int main(){
//	
//	seriesFun();
//}
//
//int seriesFun(){
//	int i;
//	for(i=1; i<=10; i++){
//		printf("%d, ",i*i);
//	}
//}


