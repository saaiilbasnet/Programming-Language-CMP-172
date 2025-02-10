#include<stdio.h>
#include<string.h>

// 1. // struct subjects{
//	int a,b,c,d,e;
//	char name[25];
//};

//2

//struct account{
//	int empId;
//	char empName[25];
//	float salary;
//};

//struct student{
//	int roll;
//	char stdName[25];
//	char address[30];
//	long long telephone;
//	
//};

struct students{
	int subMarks[5];
	int roll;
	char stdname[25];
	char remark[30];
};



int main(){
	
//	wap to input 5 subject mark, roll no and name of 20 students that calculate total percentage and result i.e pass or fail.
struct students s[20];
int i,j;
float total=0, percent;

for(i=0; i<2; i++){
	printf("Enter Roll No. and Name of student%d : ",i+1);
	scanf("%d %s",&s[i].roll,s[i].stdname);

 for(j=0; j<5; j++){
 	printf("Enter Mark of 5 Subjects : ");
 	scanf("%d",&s[i].subMarks[j]);
 }

}


for(i=0; i<2; i++){
for(j=0; j<5; i++){
	
	total = s[i].subMarks[j] + total;
	percent = total/5;
	
	if(s[i].subMarks[j] >= 40){
		
     strcpy(s[i].remark, "PASS");
		 
	}
	
	else{
	
			 strcpy(s[i].remark, "FAIl");			
	}
}
}

for(i=0; i<2; i++){
	printf("%d\t  %s\t ",s[i].roll,s[i].stdname);
	for(j=0; j<5; j++){
		printf("Subject%d : %d\n",s[i].subMarks[j]);
	}
	
	printf("%d\n\n",s[i].remark);
}


	
	
//	wap to input roll no, name, address and telephone of 10 students.
	
//	struct student s[10];
//	int i;
//	
//	for(i=0; i<2; i++){
//		printf("Enter Roll No, Name, Address and Telephone No. of Student%d : ",i+1);
//		scanf("%d%s%s%lld",&s[i].roll,s[i].stdName,s[i].address,&s[i].telephone);
//	}
//	
//	printf("Roll No.\t  Name\t  Address\t  Telephone\n");
//	
//	for(i=0; i<2; i++){
//		printf("%d\t  %s\t  %s\t  %lld\n",s[i].roll,s[i].stdName,s[i].address,s[i].telephone);
//	}
//	
	
	
//	employee account 
//	struct account e[5];
//	int i;
//	
//	for(i=0; i<5; i++){
//		printf("Enter Employee Id, Name and Salary of Employee%d : ",i+1);
//		scanf("%d%s%f",&e[i].empId,e[i].empName,&e[i].salary);
//	}
//	
//	printf("Employee Id\t  Employee Name\t  Employee Salary\n");
//	
//	for(i=0; i<5; i++){
//		printf("%d\t  %s\t  %f\n",e[i].empId,e[i].empName,e[i].salary);
//	}
	
	
	
//  1.	Marks for 5 students and display their marks, total and percentage.
//	struct subjects s;
//	 
//	printf("Enter mark of 5 subjects : ");
//	scanf("%d %d %d %d %d",&s.a,&s.b,&s.c,&s.d,&s.e);
//	printf("Enter Name of the student : ");
//	scanf("%s",s.name);
//	
//	float total, percent;
//	
//	total = s.a + s.b + s.c + s.d + s.e;
//	percent = total/5;
//	
//	printf("Name\t  Sub1\t  Sub2\t  Sub3\t  Sub4\t  Sub5\t  Total\t  Percentage\n");
//	printf("%s \t  %d\t  %d\t  %d\t  %d\t  %d\t  %f\t  %f",s.name,s.a,s.b,s.c,s.d,s.e,total,percent);
	
	return 0;
}

/*

wap to input 5 subject mark, roll no and name of 20 students that calculate total percentage and result i.e pass or fail.
wap to input 5 subject mark, roll no and name of 20 students and display only the result of passed students.


*/
