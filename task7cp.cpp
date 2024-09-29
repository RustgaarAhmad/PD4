#include<iostream>
using namespace std;

void flowershop(int redrose, int whiterose, int tulips);

main()
{
	cout<<"Red Rose: ";
	int redrose;
	cin>> redrose;
	cout<< "White Rose: ";
	int whiterose;
	cin>> whiterose;
	cout<< "Tulips: ";
	int tulips;
	cin>> tulips;
	flowershop(redrose, whiterose, tulips);
	return 0;
}

void flowershop(int redrose, int whiterose, int tulips)
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