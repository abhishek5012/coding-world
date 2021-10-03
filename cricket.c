#include<stdio.h>
#include<conio.h>
#include<string.h>
char b[20];int i,j;
char ch;
char m[30];
struct abc{
char teamname[20];
char venue[20];
char competition[20];
char matchbet[12];
char matchver[12];
char tosswon[15];
char elected[14];
char date[12];
char over[15];
char ini[5];
}team;

struct bat{
	char batsman[20];
	char six[20];
	char four[20];
	char run[30];
	char over[19];
	char special[20];
	float rate[30];
	
	};
	struct bat batting[11];
	
	
	struct boll{
	char bowler[20];
	char totalov[19];
	char totalru[18];
	char special[30];
	float average[18];	
};
struct boll bowling[11];
void menu();
void read();
void enter();
FILE *fp;


int main(){

printf("\n\n\n\n\n\n\t\t\t$$$$$WELCOME$$$");
getch();
menu();

}

 void menu(){int c;
system("cls");
printf("\n\n\t\1.NEW SCORE SHEET ");
printf("\n\n\t\t2.VIEW SCORE SHEET ");
printf("\n\n\t\t3.EXIT");
printf("\n\n\n\t\t\t\tENTER THE CHOICE : ");
scanf("%d",&c);
switch (c){
case 1: 
system("cls");printf("enter the name of the file :");
scanf("%s",m);
fp=fopen(m,"w");
enter();
break;
case 2:
system("cls");
system("cls");printf("enter the name of the file :");
scanf("%s",b);

	printf("\n\n\n\t\t\tYEHHH!!! ");
	printf("\n\n\t\tPRESS THE KEY TO CONTINUE ");
	getch();

fp=fopen(b,"r");
read();

break;
case 3:
system("cls");
close();
break;	
default:
system("cls");
printf("\n\n\n\t\t\tYOU HAVE ENTERRED THE WRONG CHOICE  ENTER THE CORRECT CHOICE");	
menu();
}
}


void enter(){system("cls");



printf("\n\n\t\tENTER THE COMPETITION TYPE :");fflush(stdin);
gets(team.competition);
printf("\n\n\t\tENTER THE TEAM NAME : ");fflush(stdin);
gets(team.teamname);
printf("\n\n\t\tMATCH BETWEEN :");fflush(stdin);
gets(team.matchbet);
printf("\n\n\t\tMATCH VERSUS :");fflush(stdin);
gets(team.matchver);
printf("\n\n\t\tTOSS WON BY :");fflush(stdin);
gets(team.tosswon);
printf("\n\n\t\tELECTED TO :");fflush(stdin);
gets(team.elected);
printf("\n\n\t\tDATE OF THE MATCH :");fflush(stdin);
gets(team.date);       
printf("\n\n\t\tINNING :");	 fflush(stdin);  
gets(team.ini);
printf("\n\n\t\tTOTAL OVER TO BE PLAYED :");fflush(stdin);
gets(team.over);
 
 printf("\n");
 printf("\nbatsman");
 printf("\tname");
 printf("\tspeciality");
 printf("\truns");
 printf("\tfours");
 printf("\tsix");
 printf("\ttotal balls");
 printf("\trun rate"); 	   

for(i=0;i<11;i++)
{printf("\n\n\t\tBATMAN : %d",(i+1));
printf("\n\n\t\tENTER THE BATSMAN`S NAME :");fflush(stdin);
gets(batting[i].batsman);
printf("\n\n\t\tENTER THE BATSMAN`S SPECIALITY  :");fflush(stdin);
gets(batting[i].special);
printf("\n\n\t\tENTER THE BATSMAN`S RUNS :");fflush(stdin);
gets(batting[i].run);
printf("\n\n\t\tTOTAL FOURS  :");fflush(stdin);
gets(batting[i].four);
printf("\n\n\t\tTOTAL SIX :");fflush(stdin);
gets(batting[i].six);
printf("\n\n\t\tTOTAL BALLS PLAYED :");fflush(stdin);
gets(batting[i].over);
printf("\n\n\t\tENTER THE RUN RATE OF THE BATSMAN :");fflush(stdin);
scanf("\n\n\t\t%f",&batting[i].rate);
}

for(i=0;i<11;i++){
printf("\n\n\t\tBOWLER : %d",(i+1));
printf("\n\n\t\tENTER THE BOWLER`S NAME :");fflush(stdin);
gets(bowling[i].bowler);

printf("\n\n\t\tENTER THE BOWLER`S SPECIALITY :");fflush(stdin);
gets(bowling[i].special);	
printf("\n\n\t\tENTER THE TOTAL BOWLER`S OVER :");fflush(stdin);
gets(bowling[i].totalov);

printf("\n\n\t\tENTER THE TOTAL RUN GIVEN BY BOWLER :");fflush(stdin);
gets(bowling[i].totalru);	
printf("\n\n\t\tSPEED OF THE BALL");fflush(stdin);
scanf("%f",&bowling[i].average);

}

fprintf(fp," COMPETITION TYPE :%s",team.competition);
fprintf(fp,"\n TEAM NAME :%s",team.teamname);	   
fprintf(fp,"\nMATCH BETWEEN :%s",team.matchbet);
fprintf(fp,"\nMATCH VERSUS :%s",team.matchver);
fprintf(fp,"\nTOSS WON BY :%s",team.tosswon);
fprintf(fp,"\nELECTED TO  :%s",team.elected);
fprintf(fp,"\n INNING :%s",team.ini);
fprintf(fp,"\nTOTAL OVER PLAYED :%s",team.over);
fprintf(fp,"\n DATE OF THE MATCH :%s",team.date);

 
 fprintf(fp,"\n");
 fprintf(fp,"\nbatsman");
 fprintf(fp,"\t\tname");
 fprintf(fp,"\tspeciality");
 fprintf(fp,"\truns");
 fprintf(fp,"\tfours");
 fprintf(fp,"\tsix");
 fprintf(fp,"\ttotal balls");
 fprintf(fp,"\trun rate");
 for(i=0;i<11;i++){
 	fprintf(fp,"\nbatman:%d", (i+1));
 	fprintf(fp,"\t%s",batting[i].batsman);
fprintf(fp,"\t%s",batting[i].special);
 fprintf(fp," \t%s",batting[i].run);
 fprintf(fp," \t%s",batting[i].four);
 fprintf(fp," \t%s",batting[i].six);
 fprintf(fp,"\t%s",batting[i].over);
 fprintf(fp,"\t\t%.2f",batting[i].rate);	
 }
fprintf(fp,"\n");
 fprintf(fp,"\nbowler");
 fprintf(fp,"\t\tname");
 fprintf(fp,"\tspeciality");
 fprintf(fp,"\ttotal overs");
 fprintf(fp,"\tgiven runs");
 fprintf(fp,"\tball speed");
 
 
 
for(i=0;i<11;i++){
fprintf(fp,"\nbowler:%d",(i+1));
fprintf(fp,"\t%s",bowling[i].bowler);	
fprintf(fp,"\t%s",bowling[i].special);	
fprintf(fp,"\t\t%s",bowling[i].totalov);
fprintf(fp,"\t\t%s",bowling[i].totalru);
fprintf(fp,"\t\t%.2f",bowling[i].average);	
}
fclose(fp);
menu();
 
 }
//to read from the file
void read()
{
char ch=getc(fp);
while(ch!=EOF){
	ch=getc(fp);
	printf("%c",ch);
}i++;
ch=getc(fp);	
fclose(fp);	
getch();
menu();	
}
