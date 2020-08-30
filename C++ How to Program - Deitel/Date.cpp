#include<iostream>

using namespace std;

class Date {
private:
    int d, m, y;

public:
    Date(int Month, int Day, int Year);
    friend int countLeapYears(Date d);
    friend int operator-(Date dt1, Date dt2);
};

Date::Date(int Month, int Day, int Year) {
    m = Month;
    d = Day;
    y = Year;
}

// tore number of days in all months from January to Dec.
const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int countLeapYears(Date d) {
    int years = d.y;

    if (d.m <= 2)
    years--;
    return years / 4 - years / 100 + years / 400;
}

int operator-(Date dt1, Date dt2) {

    long int n1 = dt1.y*365 + dt1.d;

    for (int i=0; i<dt1.m - 1; i++)

        n1 += monthDays[i];
        n1 += countLeapYears(dt1);
        long int n2 = dt2.y*365 + dt2.d;

        for (int i=0; i<dt2.m - 1; i++)

            n2 += monthDays[i];
            n2 += countLeapYears(dt2);

return (n2 - n1);
}

int main() {

int month, day, year;
cout << "Enter DOB details" <<endl;
cout << "Enter month" <<endl;
cin >> month;
cout << "Enter day" <<endl;
cin >> day;
cout << "Enter year" <<endl;
cin >> year;

Date dt1 ( month, day, year);

cout << "Enter current date details" <<endl;
cout << "Enter month" <<endl;
cin >> month;
cout << "Enter day" <<endl;
cin >> day;
cout << "Enter year" <<endl;
cin >> year;

Date dt2 ( month, day, year);
int days = dt1 - dt2;

cout << "Number of days between two dates is " << days;

return 0;
}