#include<stdio.h>
int n;
   struct emp {
char name[15];
int age;
 int phone[13] ;
char department[15];
float salary;
};
int i;	
int main(){
	int n;
	struct emp employ[n];
	printf("\nenter the number of employees");
   scanf("\n%d",&n);
	printf("enter the employees details \n");

printf("NOW provide the information of the employees !!");		

for(i=0;i<2;i++){
		
		printf("\nemployee %d",i+1);
		printf("\nEnter the employees name! ");
		scanf("%s",employ[i].name);
		printf("Enter the employees age !");
	scanf("%d",&employ[i].age);
	printf("Enter the employees phone number!");
		scanf("%d",&employ[i].phone);
		printf("Enter the employees salary !");
	scanf("%f",&employ[i].salary);
	printf("Enter the employees Department !");
	scanf("%s",&employ[i].department);	
	printf("\n");	}


printf("This is the given information of the employees being provided!");
printf("\n");
printf("\temploy");
printf("\t\temploy name");
printf("\temploy age");
printf("\temploy phone no.");
printf("\temploy salary");
printf("\temploy department");
printf("\n");
for(i=0;i<2;i++){printf("\temployee %d",i+1);
		printf("\t %s",employ[i].name);
	printf(" \t\t%d",employ[i].age);	
	printf(" \t\t%d",employ[i].phone
printf(" \t%f",employ[i].salary);
printf("\t\t%s",employ[i].department);	
printf("\n");}	
}

	
	
	

