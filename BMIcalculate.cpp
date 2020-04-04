//pg 112 q2 ch 3 c ++ book
#include <iostream>

using namespace std;

int main()
{
    const int FEET_TO_INCHES = 12;
    const double INCHES_TO_METER = 0.0254;
    const double LBS_TO_KG = 1 / 2.2;

    cout << "Please enter you height in feet and inches. " << endl;
    cout << "Feet: ";
    int feet_tall;
    cin >> feet_tall;

    cout << "Inches: ";
    int inches_tall;
    cin >> inches_tall;

    //metric conversions
    float height_meters = ((feet_tall * FEET_TO_INCHES) + inches_tall) * INCHES_TO_METER;
    cout << "Your height in meters is " << height_meters << " meters" << endl;
    
    cout << "What is your weight in pounds?" << endl;
    int pounds_heavy;
    cin >> pounds_heavy;
    float weight_kg = pounds_heavy * LBS_TO_KG; //metric conversion

    cout << "Your BMI is " << weight_kg / (height_meters * height_meters) << endl;

}