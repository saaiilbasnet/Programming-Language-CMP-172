#include<stdio.h>

int main(){
	
	
	/*
	
	1
	121
	12321
	1234321
	123454321
	
	*/
	
//	Alternative
	
	int i,varA = 1;
	
	
	for(i=1; i<=5; i++){
		printf("%d\n",varA*varA);
		varA = varA * 10 + 1;
	}
	
	
//	int i,j;
//	
//	for(i=1; i<=5; i++){
//		for(j=1; j<=i; j++){
//			printf("%d",j);
//		}
//		for(j=i-1; j>=1; j--){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
	
	
/*
10 20 30
20 30 40
30 40 50


*/

//int i, j;
//
//for(i=0; i<3; i++){
//	for(j=1; j<=3; j++){
//		printf("%d\t",(i+j)*10);
//	}
//	printf("\n");
//}



/*
12345
1234
123
12
1
*/

//Alternative
//int i,j;
//
//for(i=5; i>=1; i--){
//	for(j=1; j<=i; j++){
//		printf("%d",j);
//		}
//printf("\n");
//}

//int i, a= 12345;
//
//for(i=1; i<=5; i++){
//	printf("%d \n",a);
//	a = a/10;
//}
	
	
/*
1
12
123
1234
12345

*/
	
//	Alternative

//int i, a = 1, b = 2;
//
//for(i = 1; i<=5; i++){
//	printf("%d\n",a);
//	a = a * 10 + b;
//	b++;
//}
//	
	
//	int i,j;
//	
//	for(i=1; i<=5; i++){
//	
//	for(j=1; j<=i; j++){
//		printf("%d",j);
//	}
//	
//	printf("\n");
//	
//	}
	
	return 0;
}
