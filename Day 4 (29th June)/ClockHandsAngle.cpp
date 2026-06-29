#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hour, minute;
    cout << "Enter hour (1-12): ";
    cin >> hour;
    cout << "Enter minutes (0-59): ";
    cin >> minute;
    double hourAngle = (hour % 12) * 30 + minute * 0.5;
    double minuteAngle = minute * 6;
    double angle = abs(hourAngle - minuteAngle);
    if (angle > 180)
        angle = 360 - angle;
    cout << "Angle between hands = " << angle << " degrees";
    return 0;
}