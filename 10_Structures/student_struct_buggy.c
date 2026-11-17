#include<stdio.h>
#include<string.h>

/*
 * Problem: Using a struct, input roll no., name and 5 subject marks for
 *          students, then compute each student's percentage and PASS/FAIL
 *          remark.
 * Status: first attempt, left with its original bugs for reference - see
 * student_management_system.c for the corrected version. Bugs here:
 *   - inner loop condition `j<5; i++` increments i instead of j (infinite
 *     loop / wrong indices).
 *   - `total` is never reset per student, so it keeps accumulating.
 *   - `printf("Subject%d : %d\n", s[i].subMarks[j])` is missing the
 *     subject-number argument.
 *   - `%d` is used to print `s[i].remark`, which is a string (needs %s).
 */
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

	return 0;
}
