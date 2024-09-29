#include<iostream>
using namespace std;
void result(string);
main()
{
	cout << "Enter true or false:";
	string conversion;
	cin >> conversion;
	result(conversion);
}
void result(string conversion)
{
	if(conversion=="true")
 {
	cout << "false";
}
	if(conversion=="false")
{
	cout << "true";
 }
}

