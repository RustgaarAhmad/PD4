#include<iostream>
using namespace std;
void longestduration(int hours, int minutes);
main()
{
	cout<< "Enter the number of hours:";
	int hours;
	cin>> hours;
	cout<< "Enter the number of minutes:";
	int minutes;
	cin>> minutes;
	longestduration(hours, minutes);
}
void longestduration(int hours, int minutes)
{
	int h_m = hours * 60;
	if( h_m >= minutes)
{
	cout << hours << "hours" <<endl;
}
	else
{
	cout << minutes << "minutes" <<endl;
}
}
