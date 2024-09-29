#include <iostream>
using namespace std;

void possible(int a, int b);

int main() 
{
  int a, b;
  cout << "Enter your position: ";
  cin >> a;
  cout << "Enter your friend's position: ";
  cin >> b;
  possible(a, b);
}

void possible(int a, int b) 
{
  int diff = b - a;
  if (diff >= 1 && diff <= 6) 
{
  cout << "true" << endl;
} 
  else 
{
    cout << "false" << endl;
  }
}