#include<stdio.h>

int main(){
	
//	Dispalying the transpose of the matrix

	int mat1[3][3]; int i,j;

for	(i=0; i<3; i++){ /*Input for the matrix1*/
	for(j=0; j<3; j++){
		printf("Enter Matrix1[%d][%d]: ",i+1,j+1);
		scanf("%d",&mat1[i][j]);
	}
}

//Displaying the original matrix
printf("Orginal Matrix: \n");
for(i=0; i<3; i++)
{
	for(j=0; j<3; j++){
		
	printf("%d\t",mat1[i][j]);  //Display Block
		
	}
	printf("\n");
}

//Displaying the transpose of the original matrix
printf("Transpose:\n");
for(i=0; i<3; i++)
{
	for(j=0; j<3; j++){
		
	printf("%d\t",mat1[j][i]);  //Display Block
		
	}
	printf("\n");
}

	
	//Display the diagonals of the 3X3 matrix
	
//	int mat1[3][3]; int i,j;
//
//for	(i=0; i<3; i++){ /*Input for the matrix1*/
//	for(j=0; j<3; j++){
//		printf("Enter Matrix1[%d][%d]: ",i+1,j+1);
//		scanf("%d",&mat1[i][j]);
//	}
//}
//
//printf("Displaying 3x3 matrix : \n");
//
//for(i=0; i<3; i++)
//{
//	for(j=0; j<3; j++){
//		
//		printf("%d \t",mat1[i][j]);	
//	}
//	printf("\n");
//}
//
//printf("Displaying the diagonals.\n");// Display the primary diagonal
//    printf("\nPrimary diagonal: ");
//    for (int i = 0; i < 3; i++) {
//        printf("%d ", mat1[i][i]);
//    }
//
//    // Display the secondary diagonal
//    printf("\nSecondary diagonal: ");
//    for (int i = 0; i < 3; i++) {
//        printf("%d ", mat1[i][2 - i]);
//    }
return 0;
}
