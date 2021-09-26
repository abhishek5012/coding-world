#include<stdio.h>
int n;
   struct emp {
char name[15];
int age;
int phone ;
char department;
double salary;
};
int i;
void provideInfo();
void EMinfo();	
int main(){
	int n;
	struct emp employ[n];
	printf("\nenter the number of employees");
   scanf("\n%d",&n);
	printf("enter the employees details \n");
void provideInfo();
printf("NOW provide the information of the employees !!");		
void EMinfo();
printf("This is the given information of the employees!");
}

void provideInfo(){
struct emp employ[n];

for(i=0;i<n;i++){
		
		printf("\nemployee %d",i+1);
		printf("\nEnter the employees name! ");
		scanf("\n%s",employ[i].name);
		printf("\nEnter the employees age !");
	scanf("\n%d",&employ[i].age);
	printf("\nEnter the employees age !");
		scanf("\n%d",&employ[i].phone);
		printf("\nEnter the employees salary !");
	scanf("\n%lf",&employ[i].salary);
	printf("Enter the employees Department !");
	scanf("\n%s",&employ[i].department);	
	printf("\n");	}
}

void EPinfo(){
	struct emp employ[n];

for(i=0;i<n;i++){
		printf("Employee name %s",employ[i].name);
	printf("Empolyee age %d",employ[i].age);	
	printf("Employee phone number%d",employ[i].phone);
printf("Employee salary %lf",employ[i].salary);
printf("Employee department %s",employ[i].department);	}
printf("\n");	
}
	
	
	

