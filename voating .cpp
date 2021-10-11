#include<iostream>
using namespace std;
int evaluate(int m);
int main(){
	
int m;
cout<<"!!!HEYY USER : ";
cout<<"\n!ENTER YOUR AGE :"	;
cin>>m;
evaluate(m);
	return 0;}



int evaluate(int m){
	
	if(m==18)
		cout<<"!YOU AN ABLE TO VOTE ";
		else if(m>18)
			cout<<"YOU CAN ALSO ABLE TO VOTE ";
	else 
	cout<<"SORRY YOU CAN'T VOTE ";
	
	
	
}
