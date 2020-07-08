#include <iostream>

using namespace std;

int main(){
    int miles, mpg, tolls;
    double cost, fees;

    cout<<"Enter total miles driven per day: ";
    cin>>miles;
    cout<<"Enter cost per gallon of gasoline: ";
    cin>>cost;
    cout<<"Enter average miles per gallon: ";
    cin>>mpg;
    cout<<"Enter parking fees per day: ";
    cin>>fees;
    cout<<"Tolls per day: ";
    cin>>tolls;

    cout<<"Your cost per day is "<<miles*cost/mpg+fees*tolls;
    cout<<"You could save "<<(miles*cost/mpg+fees+tolls)*0.4<<" if you use Uber!";

    return 0;
}