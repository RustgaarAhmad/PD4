#include<iostream>
using namespace std;
void tpChecker(int people, int rolls);
main()
{
	cout<< "Number of people in the household:";
	int people;
	cin>> people;
	cout<< "Numbere of rolls of tp:";
	int rolls;
	cin>> rolls;
	tpChecker(people, rolls);
}
void tpChecker(int people, int rolls)
{
	int totalSheets = rolls * 500;
	int dailyUsage = people * 57;
	int daysLast = totalSheets / dailyUsage;

	   if(daysLast < 14)
{
	cout<< "Your Tp will only last " << daysLast << " days, buy more!" <<endl;
  }
else
{
	cout<< "Your Tp will last " << daysLast << " days, no need to panic!" <<endl;
  }
}