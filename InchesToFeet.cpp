//pg 111 ch 3 c ++ book
#include <iostream>

using namespace std;

int main()
{
    const int INCHES_PER_FOOT = 12;
    cout << "Enter your height in inches: ____\b\b\b" ;
    int height_inches;
    cin >> height_inches;
    cout << "You are " << height_inches / INCHES_PER_FOOT << " feet";
    cout << " and " << height_inches % INCHES_PER_FOOT << " inches tall." << endl;
}