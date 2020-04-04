//pg 111 ch 3 c ++ book
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    int n_char = CHAR_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << endl;
    cout << "Number of bytes: " << endl;
    cout << "char is " << sizeof(char) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << "float is " << sizeof(float) << " bytes." << endl;
    cout << "double is " << sizeof(double) << " bytes." << endl;
    cout << "long double is " << sizeof(long double) << " bytes." << endl;
    cout << endl;

    cout << "Maximum values: " << endl;
    cout << "char: " << n_char << endl;
    cout << "short: " << n_short << endl;
    cout << "int: " << n_int << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;
    cout << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    cout << endl;
    cout << "Floats have 6 significant figures." << endl;
    cout << "Doubles have 15 significant figures." << endl;
    cout << endl;
    return 0;
}