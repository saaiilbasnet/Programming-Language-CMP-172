#include<stdio.h>

int main(){ 

//Generating multiple of 5 using while-loop
int i=1;
while(i<=50){
	if(i%5==0){
		printf("%d\n",i);
	}
	i++;
}

/*
//Generating odd numbers using while-loop
int i=1;
while(i<=50){
	if(i%2!=0){
		printf("%d\n",i);
	}
	i++;
}
*/

/*
//Generating even numbers by while-loop
int i =1;
while(i<=100){
	if(i%2==0){
		printf("%d\t",i);
	}
	i++;
}
*/

/*
//Example of while-loop
int i=1;

while(i<=10){
	printf("%d\n",i);
	i++;
}

*/

/*

 //+=
	//1,3,9,7,...21
	
	for(int i =1; i<=21; i+=2){ 
	    printf("%d\n",i);
	}
	
	/*
	
	//1,4,9,16,......,100
	for(int i =1; i<=10;i++){
		printf("%d\n",(i*i));
	}
	
	
	
	*/
	
	/*
	//7,14,21,....70
	
	for(int i=1; i<=70;i++){
		if(i%7==0){
			printf("%d\n",i);
		}
	}
	*/
	
	/*
	//3,6,9,......,30
	
	for(int i =1; i<=30; i++){
		if(i%3==0){
			printf("%d\n",i);
		}
	}
	*/
	
	/*
	
	//5,10,15,......50
	for(int i =1; i<=50;i++){
		if(i%5==0){
			printf("%d\n",i);
		}
	}
	
	*/
	
	/*
		//WAP to printf odd number upto 100.
		for(int i =0; i<=100;i++){
		if(i%2!=0){
			printf("%d\n",i);
		}
		}
		*/
	
	/*
	//WAP to printf even number upto 100.
	for(int i =0; i<=100;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	
	*/
	
	/*
	
	//WAP to print first 10 natural number.
	for(int i =1; i<=10;i++){
		printf("%d\n",i);
	}
	
	*/
	
	return 0;
}
