#include<iostream>
using namespace std;
void challan(float);

main()
{
	cout << "Enter Speed:";
	float speed;
	cin >> speed;
	challan(speed);
}

void challan(float speed)
{
	if(speed<=100)
{
	cout << "Perfect!You're going good.";
}
else 
	cout << "Halt...You will be challenged!!!";
}

