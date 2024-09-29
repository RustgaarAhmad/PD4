#include <iostream>
using namespace std;
void pet(int holidays);
main() 
{
  int holidays;
  cout << "Holidays: ";
  cin >> holidays;
  pet(holidays);
}

void pet(int holidays)
 {
  int workingDays = 365 - holidays;
  int timeForGames = workingDays * 63 + holidays * 127;
  int difference = 30000 - timeForGames;

  if (difference >= 0) 
{
    cout << "Tom sleeps well" << endl;
    int hours = difference / 60;
    int minutes = difference % 60;
    cout << hours << " hours and " << minutes << " minutes less for play" << endl;
}
else 
{
    cout << "Tom will run away" << endl;
    int hours = abs(difference) / 60;
    int minutes = abs(difference) % 60;
    cout << hours << " hours and " << minutes << " minutes for play" << endl;
  }
}