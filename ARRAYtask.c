#include<stdio.h>
int main(){
	int matrix[3][3];
	int sum=0;
	int i,j;
	printf("ENTER THE NUMBERS ROW WISE");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		scanf("%d",&matrix[i][j]);
	}}
	printf("\nThe matrix is \n");
	for(i=0;i<3;i++){printf("\n");
	for(j=0;j<3;j++){
		printf("%d\t",matrix[i][j]);
}}
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	if(i==j){
		printf("\nThe %d th diagonal elements are %d\t",i,matrix[i][j]);
	sum=sum+matrix[i][j];}}}
	printf("\nThe sum of the diagonal elements are %d",sum);
}
