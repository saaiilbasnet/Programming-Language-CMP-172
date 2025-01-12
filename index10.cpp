#include<stdio.h>

int main(){

	int i, a = 54321;
	
	for(i = 1; i<= 5; i++){
		printf("%d\n",a);
		a = a/10;
	}
		
	
//	int i, a = 12345;
//	
//	for(i = 1; i<= 5; i++){
//		printf("%d\n",a);
//		a = a/10;
//	}
//	

//int i, temp1 =5, temp2 = 4;
//
//for(i =1; i<=5; i++){
//	printf("%d \n",temp1);
//	temp1 = temp1 * 10 + temp2;
//	temp2 = temp2 - 1 ;
//}


//1,4,9,16,25,.....100

//int i, counterVar=0;
//
//for(i = 1;  i<=10; i++)
//{
//	printf("%d",i*i);
//	counterVar++;
//	
//if(counterVar < 10){
//		printf(", ");
//}
//	
//}
//



//	5,55,555,......10th term

//int i; long a= 5;
//	
//	for(i = 1; i<= 10; i++){
//		
//		printf("%ld, ",a);
//		a = a * 10 + 5;
//	}
//
//	
	
	
	//3,33,333,333,......10th term
	
//	int i, a= 3;
//	
//	for(i = 1; i<= 10; i++){
//		printf("%d, ",a);
//		a = a * 10 + 3;
//	}
//	
	
	
	//5,25,125,.........,10th term
//	int i, temp = 5;
//	
//	for(i = 1; i <= 10; i++){
//		printf("%d, ",temp);
//		temp = temp * 5;
//	}
	
	
	
	//1,12,123,1234,12345
	
	
//	alterntive way

//int a = 1, b=2;
//
//for(int i = 1; i <= 5; i++){
//	printf("%d, ",a);
//	a = a*10+b;
//	b = b+1;
//}
	
	
//	for(int i = 1; i<=5; i++){
//		
//		for(int j = 1; j<=i; j++){
//			printf("%d",j);
//		}
//		
//		printf(",");
//}
	
	
	
	
	//1,1,2,3,5,8,13...........10th term.
//	int a = 1, b = 1, sum = 0;
//	
//	printf("%d, %d, ",a,b);
//	for(int i = 1 ; i<=10; i++){
//		sum = a + b;
//		a = b;
//		b = sum;
//		printf("%d, ",sum);
//	}
	
	return 0;
}
