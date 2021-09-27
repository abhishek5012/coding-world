#include<stdio.h>

int main(){
char ch[10];
int i;
FILE *fp,*ft;
fp=fopen("anik.txt","w");
fprintf(fp,"My Captain");
fclose(fp); 	

fp=fopen("anik.txt","r");
for(i=0;i<=10;i++){
ch[i]=getc(fp);}for(i=10;i>=0;i--){ 
printf("%c",ch[i]);}
fclose(fp); 

printf("\ncopying the file ");
fp=fopen("anik.txt","r");
ft=fopen("kink.txt","w");

for(i=0;i<10;i++){
	ch[i]=getc(fp);
	putc(ch[i],ft);
	
}

printf("\nfile copied");


}
 
