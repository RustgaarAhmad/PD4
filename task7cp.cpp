#include<iostream>
using namespace std;

void flowershop(float redrose, float whiterose, float tulips);

main()
{
	cout<<"Red Rose: ";
	float redrose;
	cin>> redrose;
	cout<< "White Rose: ";
	float whiterose;
	cin>> whiterose;
	cout<< "Tulips: ";
	float tulips;
	cin>> tulips;
	flowershop(redrose, whiterose, tulips);
	return 0;
}

void flowershop(float redrose, float whiterose, float tulips)
{
	float totalprice = redrose * 2.00 + whiterose * 4.10 + tulips * 2.50;
	cout<< "Original Price: $ "<< totalprice <<endl;
	if(totalprice > 200)
{
	float discount = totalprice * 0.20;
	float payableamount = totalprice - discount;
	cout<< "Price after Discount: $ "<< payableamount << endl;
}
else
{
	cout<< "No discount applied "<< endl;
}
}