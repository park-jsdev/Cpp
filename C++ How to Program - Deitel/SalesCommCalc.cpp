#include <iostream>

using namespace std;

int main(){
    int employee = 0;
    double sales;
    string employees [3] = {"Sundar Pichai", "Mark Zuckerberg", "Jeff Bezos"};
    int size = sizeof(employees)/sizeof(employees[0]);
    while (employee < size){
        cout<<"How much did employee "<<employees[employee]<<" sell last week?"<<endl;
        cin>>sales;
        cout<<"employee "<<employees[employee]<<" earned "<<200+sales*0.09<<endl;
        employee++;
    }
    return 0;
}