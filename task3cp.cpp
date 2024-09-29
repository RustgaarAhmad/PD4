#include<iostream>
using namespace std;
void calculate(string name, float price);
main()
{
while(true)
{
	cout << "Enter the country name: ";
	string name;
	cin >> name;
	cout << "Enter the ticket price in dollars: $";
	float price;
	cin  >> price;
	calculate(name, price);
	
 }
}

void calculate(string name, float price)
{
	float discount = 0;
  
	if (name == "Pakistan") 
	{
    	discount = 0.05;
  }
	if (name == "Ireland")
	{
    	discount = 0.10;
  }
	if (name == "India")
	{
    	discount = 0.20;
  }
	if (name == "England") 
	{
    	discount = 0.30;
  }
	if (name == "Canada")
	{
    	discount = 0.45;
  }
  
	if (discount == 0) 
	{
    	cout << "Invalid country. No discount applied." << endl;
    	cout << "The final price of the ticket is: $" << price << endl;
  }
	if (discount != 0) 
	{
    	float finalPrice = price - (price * discount);
    	cout << "The final price of the ticket after the discount is: $" << finalPrice << endl;
  }
}