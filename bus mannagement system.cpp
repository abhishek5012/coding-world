#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cstdlib>
#include<cstdio>
#include<stdlib.h>
#include<string.h>
using namespace std;
static int p =0;
class a{
	string busn,driver,arrival,depart,from,to;
	char seat[8][4][10];
	public:
		void install();
		void allotment();
		void empty();
		void show();
		void avail();
		void position(int i);
		
}bus[10];
void vline(char ch){
	for(int i=80;i>0;i--){
		cout<<ch;
		
	}
}

void a::install(){
	cout<<"\nenter the bus number :";
    cin>>bus[p].busn;
    cout<<"\nenter the driver name :";
    cin>>bus[p].driver;
    cout<<"\narrival time :";
    cin>>bus[p].arrival;
    cout<<"\ndeparture time :";
    cin>>bus[p].depart;
    cout<<"\nfrom :";
    cin>>bus[p].from;
    cout<<"\nfrom :";
    cin>>bus[p].to;
    bus[p].empty();
    p++;
}

void a::allotment(){
	int seat;
	char number[10];
	top:
		cout<<"\nbus number :";
		cin>>number;
		int n;
		for(n=0;n<=p;n++){
			if(strcmp(bus[n].busn,number)==0)
			break;
		}
	while(n<=p){
		cout<<"\nseat number :";
		cin>>seat;
		if(seat>32){
			cout<<"\ntheir are only 32 seats :";
			
		}
		else{
			if(strcmp(bus[n].seat[seat/4][(seat%4)-1],"empty")==0){
				cout<<"\nenter the passenger name :";
				cin>>bus[n].seat[seat/4][(seat%4)-1];
				break;
			}
			else{cout<<"\nseat is already reserved :";
			}
		}
	}
	if(n>p){
		cout<<"\n enter the correct bus nunber :";
		goto top;
	}
	
}

void a::empty(){
	for(int i=0;i<8;i++){
		for(int j=0;j<4;j++){
			strcpy(bus[p].seat[i][j],"empty");
		}
	}
}
void a::show(){
	
	int n;
	char number[10];
	cout<<"\nenter the number of the bus :";
	cin>>number;
	for(n=0;n<=p;n++){
		if(strcmp(bus[n].busn,number)==0){break;
		}
	}
	while(n<=p){
		vline('*');
		cout<<"\nbus no :"<<bus[n].busn<<"\ndriver name :"
		<<bus[n].driver<<"\narrival time:"<<bus[n].arrival
		<<"\ndepart time :"<<bus[n].depart<<"\nfrom :"<<bus[n].from
		<<"\nto :"<<bus[n].to;
		vline('*');
		bus[0].position(n);
		int a =1;
		for(int i=0;i<8;i++){
			for(int j=0;j<4;j++){
				a++;
				if(strcmp(bus[n].seat[i][j],"empty")!=0)
				cout<<"\nthe seat number"<<(a-1)<<"is reserved for "
				<<bus[n].seat[i][j]<<".";
			}
		} 
		break;
	}
	if(n>p)
	cout<<"\nenter the correct bus number :";
}

void a::position(int l){
	int s=0;int p=0;int j;
	for(int i=0;i<8;i++){
		for(j=0;j<4;j++){
			s++;
			if(strcmp(bus[l].seat[i][j],"empty")==0){
				cout.width(5);
				cout.fill(' ');
				cout<<s<<".";
				cout.width(10);
				cout<<bus[l].seat[i][j];
				p++;
			}
			else{cout.width(5);
			cout.fill(' ');
			cout<<s<<".";
			cout.width(10);
			cout.fill(' ');
			cout<<bus[l].seat[i][j];
			
			}
		}
	} cout<<"\n their is no empty seat in the bus available :";
}
void a::avail(){
	char number[7];
	for(int n=0;n<p;n++){
		if(strcpy(bus[n].busn,number)==0){
			break;
		}
		while(n<=p){
			vline('*');
		cout<<"\nbus no :"<<bus[n].busn<<"\ndriver name :"
		<<bus[n].driver<<"\narrival time:"<<bus[n].arrival
		<<"\ndepart time :"<<bus[n].depart<<"\nfrom :"<<bus[n].from
		<<"\nto :"<<bus[n].to;
		vline('*');
		bus[0].position(n);
		int a =1;
		for(int i=0;i<8;i++){
			for(int j=0;j<4;j++){
				a++;
				if(strcmp(bus[n].seat[i][j],"empty")!=0)
				cout<<"\nthe seat number"<<(a-1)<<"is reserved for "
				<<bus[n].seat[i][j]<<".";
			}
		} 
		break;
	}
	if(n>p)
	cout<<"\nenter the correct bus number :";
}
}
		
	
int main()
{ 
	int w;
	while(1){
		
		system("cls");
		cout<<"\n\n\t\t";
		cout<<"\n1.install : /n2.allotment :  /n3.show :  \n4.buses available : \n5.exit :";
		cout<<"\nenter the choice :";
		cin>>w;
		switch(w){
		case 1: bus[p].install();
		break;
		case 2: bus[p].allotment();	
		break;
		case 3: bus[p].show();
		break;
		case 4:  bus[p].avail();
		break;
		case 5:  exit(0);
		break;
		default: exit(0);
		break;	}}
		return 0;}

