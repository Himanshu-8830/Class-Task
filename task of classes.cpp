#include<iostream>
using namespace std;
class Time{
	private:
	 int seconds;
	 int hh,mm,ss;
	public:
		void gettime();
		void convertintoseconds();
		void displaytime();
};
void Time::gettime()
{
	cout<<"Enter Time:"<<endl;
	cout<<"Hours?";
	cin>>hh;
	cout<<"Minutes?";
	cin>>mm;
	cout<<"Seconds?";
	cin>>ss;
}
void Time:: convertintoseconds()
{
	seconds=hh*3600+mm*60+ss;
}
void Time::displaytime()
{
   cout<<"The time is= "<< hh<<" : "<<mm<<" : "<<ss;
   cout<<"\nTime in total seconds:"<<seconds;
}
int main()
{
	Time T;
	T.gettime();
	T.convertintoseconds();
	T.displaytime();
	return 0;
}
