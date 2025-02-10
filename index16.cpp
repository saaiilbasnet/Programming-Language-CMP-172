#include<stdio.h>

//WAP to print following series 

//1. 1,2,3,4,5..........,10

//int seriesFun();
//int main(){
//
//	seriesFun();
//}
//
//int seriesFun(){
//		int i;
//	for(i=1; i<=10; i++){
//		printf("%d, ",i);	
//	}
//}

int seriesFun();
int main(){

	int j, num[10];
	for(j=0; j<10; j++){
		num[j] = seriesFun();
		printf("%d\n",num[j]);
	}
	
	return 0;
}

int seriesFun(){
	static int i=0;
	i++;
	return i;
	
}

//Area of Rectangle.

//float area(float,float);
//int main(){
//	float b,h;
//	printf("Enter Height and Breadth: ");
//	scanf("%f%f",&h,&b);
//	area(b,h);
//	return 0;
//}
//
//float area(float h, float b){
//	float area;
//	area = b*h;
//	printf("Area = %f",area);
//}
