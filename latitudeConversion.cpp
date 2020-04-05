#include <iostream>
using namespace std;

int main()
{
  const double MINUTES_TO_DEGREE = 1/60.0;
  const double SECONDS_TO_DEGREE = 1/3600.0;

  cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
  cout << "First, enter the degrees: ";
  int degrees;
  cin >> degrees;
  cout << "Next, enter the minutes of the arc: " ;
  int minutes;
  cin >> minutes;
  cout << "Finally, enter the seconds of the arc: ";
  int seconds;
  cin >> seconds;
  cout << degrees << " degrees, " << minutes << " minutes " << seconds << " seconds = ";
  cout << degrees + minutes*MINUTES_TO_DEGREE + seconds*SECONDS_TO_DEGREE << " degrees" << endl;
}
