#include <iostream>

using namespace std;

class Date {
    private:
    int mon;
    int d;
    int y;

    public: Date(int month, int day, int year){
        mon = month;
        d = day;
        y = year;
    }

    int get_month(){
        return mon;
    }
    void set_month(int month){
        mon = month;
    }
    int get_day(){
        return d;
    }
    void set_day(int day){
        d = day;
    }
    int get_year(){
        return y;
    }
    void set_year(int year){
        y = year;
    }
    void displayDate(){
        cout<<mon<<"/"<<d<<"/"<<y<<endl;
    }
};


int main(){
    int day, month, year;

    cout<<"Enter month: "<<endl;
    cin>>month;
    cout<<"Enter day: "<<endl;
    cin>>day;
    cout<<"Enter year: "<<endl;
    cin>>year;

    Date date(month, day, year);
    date.displayDate();

    date.set_month(12);
    date.set_year(10);
    date.set_day(5);

    cout<<"New Day is "<<date.get_day()<<endl;
    cout<<"New Mon is "<<date.get_month()<<endl;
    cout<<"New Year is "<<date.get_year()<<endl;
    date.displayDate();

    return 0;
}
