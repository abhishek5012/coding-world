#include<stdio.h>
int main(){
	int matrix[3][3];
	int sum=0;
	int i,j,k;
	printf("ENTER THE NUMBERS ROW WISE");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		scanf("%d",&matrix[i][j]);
	}		
	}
	int l=0;
	printf("the matrix is \n");
	for(j=0;j<3;j++){
		printf("%d\t",matrix[l][j]);
}	int p=1;
printf("\n");
for(j=0;j<3;j++){
		printf("%d\t",matrix[p][j]);
}
int h=2;
printf("\n");
for(j=0;j<3;j++){
		printf("%d\t",matrix[h][j]);
}
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	if(i==j){
		printf("\nThe %d diagonal elements are %d\t",i,matrix[i][j]);
	sum=sum+matrix[i][j];
	}
	
	}}
	printf("\nThe sum of the diagonal elements are %d",sum);

	
}
