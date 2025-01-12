#include<stdio.h>

int main(){


	//sum of two 3x2 matrixes;
	
	int mat1[3][2], mat2[3][2]; int i,j, sum[3][2];

for	(i=0; i<3; i++){ /*Input for the matrix1*/
	for(j=0; j<2; j++){
		printf("Enter Matrix1[%d][%d]: ",i+1,j+1);
		scanf("%d",&mat1[i][j]);
	}
}
for	(i=0; i<3; i++){ //Input for matrix2
	for(j=0; j<2; j++){
		printf("Enter Matrix2[%d][%d]: ",i+1,j+1);
		scanf("%d",&mat2[i][j]);
	}
}

for(i=0; i<3; i++)
{
	for(j=0; j<2; j++){
		
	sum[i][j] = mat1[i][j] + mat2[i][j];	 //Process block
		
	}
}
for(i=0; i<3; i++)
{
	for(j=0; j<2; j++){
		
	printf("%d\t",sum[i][j]);  //Display Block
		
	}
	printf("\n");
}




//	WAP to reverse the elements of array

//int numArr[5],i;
//
//for(i = 0; i< 5; i++){
//	printf("Enter numArr[%d]: ",i+1);
//	scanf("%d",&numArr[i]);
//}
//
//printf(" Reversed Elements : \n");
//for(i = 4; i>=0; i--){
//
//printf("%d\n",numArr[i]);
//
//}


	//sum of two 2x2 matrixes;
	
//	int mat1[2][2], mat2[2][2]; int i,j, sum[2][2];
//
//for	(i=0; i<2; i++){
//	for(j=0; j<2; j++){
//		printf("Enter Matrix1[%d][%d]: ",i+1,j+1);
//		scanf("%d",&mat1[i][j]);
//	}
//}
//for	(i=0; i<2; i++){
//	for(j=0; j<2; j++){
//		printf("Enter Matrix2[%d][%d]: ",i+1,j+1);
//		scanf("%d",&mat2[i][j]);
//	}
//}
//
//for(i=0; i<2; i++)
//{
//	for(j=0; j<2; j++){
//		
//	sum[i][j] = mat1[i][j] + mat2[i][j];	
//		
//	}
//}
//for(i=0; i<2; i++)
//{
//	for(j=0; j<2; j++){
//		
//	printf("%d\t",sum[i][j]);
//		
//	}
//	printf("\n");
//}
	
//int mat1[2][2]; int i,j;
//
//for	(i=0; i<2; i++){
//	for(j=0; j<2; j++){
//		printf("Enter Matrix[%d][%d]: ",i+1,j+1);
//		scanf("%d",&mat1[i][j]);
//	}
//}
//for	(i=0; i<2; i++){
//	for(j=0; j<2; j++){
//	printf("%d",mat1[i][j]);
//	}
//	printf("\n");
//}

//WAP to enter 10 numbers and display the highest entered number
//int varA[10],i,temp;
//
//for( i = 0; i < 10; i++){
//	printf("Enter VarA[%d]: ",i+1);
//	scanf("%d",&varA[i]);
//}
//
//temp = varA[0];
//for(i = 0; i<10; i++){
//if(temp<varA[i]){
//	temp = varA[i];
//}	
//}
//
//printf("The greatest number is %d.",temp);
//


//WAp to enter 10 numbers and display them in a ascending order.

//int varA[10],i,j,temp;
//
//for( i = 0; i < 10; i++){
//	printf("Enter VarA[%d]: ",i+1);
//	scanf("%d",&varA[i]);
//}
//
//for( i = 0; i < 10; i++){
//for(j=0; j<10; j++){
//	if(varA[i] < varA[j]){
//
//	temp = varA[i];
//	varA[i] = varA[j];
//	varA[j] = temp;
//}
//}
//}
//printf("Fixed the array into ascending array: \n");
//
//for(i=0; i<10; i++){
//	printf("%d\n",varA[i]);
//}

//WAP to input 10 numbers in a array and display their sum.
//int varA[10],i,sum=0;
//
//for( i = 0; i < 10; i++){
//	printf("Enter VarA[%d]: ",i+1);
//	scanf("%d",&varA[i]);
//}
//
//for( i = 0; i < 10; i++){
//	sum = sum + varA[i];
//}
//
//printf("The sum of all entered numbered are : %d",sum);

	
	
//	WAP to input 10 numbers and only display the even entered numbers.
//	int varA[10],i;
//	
//	for(int i = 0; i<10; i++){
//		printf("Enter varA[%d]: ",i+1);
//		scanf("%d",&varA[i]);
//	}
//	
//	for(int i = 0; i<10; i++){
//		
//		if(varA[i]%2==0){
//			printf("%d\n",varA[i]);
//		}
//		
//	}	
//	
	
	
//	WAP to input 10 numbers in a array_variable and display them.
//	int varA[10];
//	for(int i = 0; i<10; i++){
//		printf("Enter varA[%d]: ",i+1);
//		scanf("%d",&varA[i]);
//	}
//	printf("Entered Number are : \n");
//		for(int i = 0; i<10; i++){
//		printf("varA[%d]: %d \n",i+1,varA[i]);
//	}
	

	
	return 0;
}
