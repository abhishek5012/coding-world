#include<iostream>
#include<string.h>
using namespace std;
int main(){
int arr[]={2,3,5,4};
int *p;
p=arr;
int i;
for(i=0;i<=3;i++){
	cout<<*p<<endl;
	p++;
}
return 0;


}
