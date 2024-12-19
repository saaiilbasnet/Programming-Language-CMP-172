#include<stdio.h>


int main(){
	
	
	//WAP to check if the input number is  prime or composite;
	
	int num,i,counterVar=0;
	printf("Enter : ");
	scanf("%d",&num);
	
	for(i = 1; i<=num; i++){
		if(num%i==0){
			counterVar++;
		}
	}
	if(counterVar==2){
		printf("Prime.");
	}
	else{
		printf("Composite.");
	}
	
	
	/*
	int i = 3;
	
	do{
		
			printf("%d",i);
	
		
			i=i+3;
		
	}while(i<=30);

     */
	/*
	//to print 3,6,9,12.......30
	
		int i = 1;
	
	do{
		
		if(i%3==0){
				printf("%d, ",i);
	
		}
			i++;
		
	}while(i<=30);
	*/
	
	/*
	//to print odd numbers
		int i = 1;
	printf("Odd Numbers:\n");
	do{
		
		if(i%2!=0){
				printf("%d\n",i);
	
		}
			i++;
		
	}while(i<=100);
	
	*/
	/*
	//to print even number 0 to 10.
	
	int i = 1;
	printf("Even Numbers:\n");
	do{
		
		if(i%2==0){
				printf("%d\n",i);
	
		}
			i++;
		
	}while(i<=100);
	
	*/
	/*
	
	//to print first 10 natural numbers using do while.
	int i =1;
	printf("Natural Numbers : \n");
	do{
		printf("%d\n",i);
		i++;
		
	}while(i<=10);
	
	*/
	
	return 0;
}

/*
initilization;
while(condition){
statement;
}

*/
