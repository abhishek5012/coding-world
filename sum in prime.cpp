#include<iostream>
using namespace std;
int prime(int y);
int main(){
	int x; int i; int f =1;int n=0;
cout<<"enter the value";
cin>>x;


for(i=1;i<=x;i++){
	if(prime(i)==1){
	if(prime(x-i)==1){
		cout<<"\nsum can be expressd as";
		cout<<"\n"<<x<<"="<<i<<"+"<<x-i;
		n++;
		f=0;
	}}
}
if (f==1){
	cout<<"sum of the number is not possible in the prime numbers";
	}}
	
	
int prime(int y)
{int count=0;int j;
	for(j=1;j<=y;j++){
		if(y%j==0){
			count++;
		}
	}
	if(count==2){
		return 1;
	}
return 0;}



















