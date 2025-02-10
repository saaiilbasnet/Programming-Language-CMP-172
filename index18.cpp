#include<stdio.h>
#include<string.h>

/*

1. 10 num in array and print highest
2. to insert any word then count the number of vowel alphabet
3. to calculate area of circle (retrun type function)
4. to input single number then print its multiplication table
5. to check input number is palindrome or not

*/



//int main(){


//5.
//
//
//int num,original,rem,temp;
//
//printf("Enter any number : ");
//scanf("%d",&num);
//
//original = num;
//
//while(num!=0){
//	rem = num % 10;
//	temp = temp * 10 + rem;
//	num = num/10;
//}
//
//if(original == temp){
//	printf("Palindrome.");
//}
//else{
//	printf("Not a Palindrome."); 
//}
//return 0;
//}


//4.
//int num;
//
//printf("Enter any number : ");
//scanf("%d",&num);
//
//for(int i = 1; i<=10; i++){
//	printf("%d x %d = %d\n",num,i,(num*i));
//}
//
//return 0;	
//}


//3.

//float circleArea(float);
//
//int main(){
//	float rad;
//	printf("Enter Radius : ");
//	scanf("%f",&rad);
//	float area = circleArea(rad);
//	printf("The area of circle having radius %f is %f.",rad,area);
//}
//
//float circleArea(float rad){
//	return (3.14*rad*rad);
//}

//int main(){
	
	
	//2.
	
//	char word[25];
//	int vowCounter=0;
//	
//	printf("Enter any word : ");
//	scanf("%s",word);
//   strlwr(word);
//	
//	for(int i = 0; i<strlen(word); i++){
//		if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
//			vowCounter++;
//		}
//	}
//	
//	printf("The number of vowel in %s is %d.",word,vowCounter);
	

//1.
//	int num[10],i,temp;
//	
//	for(i=0; i<10; i++){
//		printf("Enter : ");
//		scanf("%d",&num[i]);
//	}
//	
//	temp = num[0];
//	
//	for(i=0; i<10; i++){
//		if(num[i]>temp){
//			temp = num[i];
//		}
//	}
//	    printf("Entered numbers : \n");
//		for(i=0; i<10; i++){
//	    printf("%d\n",num[i]);
//	}
//	printf("The highest number among entered numbers is : %d",temp);
	
//	return 0;
//}

//WAP to store roll no., name

//struct student{
//	int roll;
//	char name[25];
//	char address[25];
//	long long telephone;
//}s;
//
//int main(){
//	
//		printf("Enter roll, name, address and telephone for student%d:",i+1);
//		scanf("%d%s%s%lld",&s.roll,s.name,s.address,&s.telephone);
//	printf("Roll No.\t Name\t Address\t Telephone\n");
//		printf("%d\t %s\t %s\t %lld\n",s.roll,s.name,s.address,s.telephone);
//	return 0;
//	
//}
