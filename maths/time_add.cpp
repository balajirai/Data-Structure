// Write C++ code to add two different times in HH_MM_SS format
#include <bits/stdc++.h>
using namespace std;
int main(){
    int hour, minute, second;
    int hour1, minute1, second1;
    int hour2, minute2, second2;

    cout << "Enter Time - 1 in HH MM SS format :--> ";
    cin >> hour1 >> minute1 >> second1;

    cout << "Enter Time - 2 in HH MM SS format :--> ";
    cin >> hour2 >> minute2 >> second2;

    second = second1 + second2;
    minute = minute1 + minute2 + (second / 60);
    hour = hour1 + hour2 + (minute / 60);

    minute = minute % 60;
    second = second % 60;

    cout << "Current Time   HOUR:MINUTE:SECOND :--> " << hour << " : " << minute << " : " << second;
    return 0;
}

/*
input :

2 40 50
1 50 50


output : 4 31 40

*/