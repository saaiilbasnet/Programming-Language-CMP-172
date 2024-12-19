#include<stdio.h>
int main(){
	
int num,i,counter=0; 

printf("Enter Number : ");
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
	
	/*
	Right-Half Pyramid
	
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	*/
	
	/*
	
	int num[5];
	for(int i =0; i<5; i++){
		printf("Enter num[%d] : ",i+1);
		scanf("%d",&num[i]);
	}
	for(int i =0; i<5; i++){
		printf("Num[%d] : %d.\n",i,num[i]);
	}
	
	*/
	
	/*
	
		//WAP to display the area of a circle.

	float radius, area;
	printf("Enter Radius : ");
	scanf("%f",&radius);
	
	area = 3.14 * radius * radius;
	
	printf("Area : %f.",area); */
	
	return 0;
}
