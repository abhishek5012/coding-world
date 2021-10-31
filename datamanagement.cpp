#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
	int choice;
	FILE *fp, *ft;
	char another;
struct student{ char first[10],last[10],course[10];
int section;
};
 student e;
char xname[10],xlname[10];
long int recsize;
fp=fopen("student.txt","rb+");
if(fp==NULL){
	fp=fopen("student,txt","wb+");
	if(fp==NULL){
		puts("cannot open the file :");
	}
}
recsize=sizeof(e);

while(1){
	
	
	system("cls");
	cout<<"\n\t\tENTER TO THE DATA BASEMAAGEMENT SYSTEM :";
		cout<<"\n\n";
		cout<<"\n1.add records :";
		cout<<"\n2.list record :";
		cout<<"\n3.modify record :";
		cout<<"\n4.delete record :";
		cout<<"\n5.exit";
		cout<<"\n\n\nenter your choice :";fflush(stdin);
		cin>>choice;
		switch(choice){
			case 1:
				another ='Y';
				while(another =='Y'||another =='Y')
				{
					system("cls");
					cout<<"\nenter the name of the student :";
					cin>>e.first;
					cout<<"\nenter the last name :";
					cin>>e.last;
					cout<<"\nenter the course :";
					cin>>e.course;
					cout<<"\nadd another record (Y/N)";
					another=getchar();
					getche();
				}
				break;
				
			case 2:
			system("cls");
			cout<<"\nthe data of the student :";
			while(fread(&e,recsize,1,fp)==1){
				cout<<"\n\n"<<e.first<<"\n"<<e.last<<"\n"<<e.course;
				
			}
			system("pause");
			break;
			
		case 3:
		system("cls");
		another='Y';
		while(another =='Y'||another =='Y'){
			cout<<"\nenter the  last name of the student :";
			cin>>xlname;
			while(fread(&e,recsize,1,fp)==1){
				if(strcmp(e.last,xlname)==0){
					cout<<"\nemter the new name :";
					cin>>e.first;
					cout<<"\nemter the last name ";
					cin>>e.last;
					cout<<"\nenter the new course name ";
					cin>>e.course;
					fwrite(&e,recsize,1,fp);
					break;
				}
				else{
					cout<<"\nrecord not found :";
				}
			}
		}		
				
				
		case 4:
		system("cls");
		another='Y';
		while(another=='Y'||another=='Y'){
		cout<<"\nenter the last name to delete:";
		cin>>xlname;
		ft=fopen("temp.txt","wb");
			
		while(fread(&e,recsize,1,fp)==1)
		if(strcmp(e.last,xlname)!=0){
			fwrite(&e,recsize,1,ft);
		}
		fclose(fp);
		fclose(ft);
		remove("student.txt");
		rename("temp.txt","student.txt");
		fp=fopen("student.txt","rb+");
		cout<<"delete account another Y/N";
		fflush(stdin);
		another=getchar();
		break ;
			
		}		
				
             default : exit(0);
              break;				
			
}}}
