#include<iostream>
#include<iomanip>
using namespace std;int sec;
class time {
	private:
	int hours;
	int minutes;
	int seconds;
	public:
		time(){
			cout<<"\n\t\t\t\tDISPLAY THE INDIAN TIME :";
		}
		void timeas(){
			cout<<"\nhours? :";
			cin>>hours;
			cout<<"\nminutes? :";
			cin>>minutes;
			cout<<"\nseconds? :";
			cin>>seconds;
					}
					void timeadd(){
					sec=hours*3600+minutes*60+seconds;
					
cout<<"\ntime is in the seconds :"<<sec;					}
void timedis(){
cout<<"total time is :"<<setw(2)<<setfill('0')<<hours<<":"
					   <<setw(2)<<setfill('0')<<minutes<<":"
					<<setw(2)<<setfill('0')<<seconds;
					}
};
int main(){
time k;
k.timeas();
k.timedis();
k.timeadd();

return 0;
	
	
}
