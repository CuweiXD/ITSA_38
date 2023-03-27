#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x;
    double summer = 0.00, nonsummer = 0.00;

    cin >> x;

    if (x <= 120) {
        summer = x * 2.10;
        nonsummer = x * 2.10;
    }
    else if (x >= 121 && x <= 330) {
        summer = (x - 120) * 3.02 + (120 * 2.10);
        nonsummer = (x - 120) * 2.68 + (120 * 2.10);
    }
    else if (x >= 331 && x <= 500) {
        summer = (x - 330) * 4.39 + (210 * 3.02) + (120 * 2.10);
        nonsummer = (x - 330) * 3.61 + (210 * 2.68) + (120 * 2.10);
    }
    else if (x >= 501 && x <= 700) {
        summer = (x - 500) * 4.97 + (170 * 4.39) + (210 * 3.02) + (120 * 2.10);
        nonsummer = (x - 500) * 4.01 + (170 * 3.61) + (210 * 2.68) + (120 * 2.10);
    }
    else if (x >= 701) {
        summer = (x -700) * 5.63 + (200*4.97)+(170 * 4.39) + (210 * 3.02) + (120 * 2.10);
        nonsummer = (x - 700) * 4.50 +(200*4.01)+ (170 * 3.61) + (210 * 2.68) + (120 * 2.10);
    }
    cout <<fixed<<setprecision(2)<< "Summer months:" << summer << endl;
    cout <<fixed<<setprecision(2)<< "Non-Summer months:" << nonsummer << endl;

    return 0;
}
