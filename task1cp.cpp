#include<iostream>
using namespace std;
void check(int num1, int num2);
main()
{
             cout << "Enter the first number:";
             int num1;
             cin >> num1;
             cout << "Enter the second number:";
             int num2;
             cin >> num2;
             check(num1, num2);
}

void check(int num1, int num2)
{
	if(num1 == num2)
        cout << "True";
else
        cout << "False";
} 
